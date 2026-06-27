/**
 * Tencent is pleased to support the open source community by making Tars available.
 *
 * Copyright (C) 2016THL A29 Limited, a Tencent company. All rights reserved.
 *
 * Licensed under the BSD 3-Clause License (the "License"); you may not use this file except 
 * in compliance with the License. You may obtain a copy of the License at
 *
 * https://opensource.org/licenses/BSD-3-Clause
 *
 * Unless required by applicable law or agreed to in writing, software distributed 
 * under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR 
 * CONDITIONS OF ANY KIND, either express or implied. See the License for the 
 * specific language governing permissions and limitations under the License.
 */
#ifndef _TARS2CS_H
#define _TARS2CS_H

#include "parse.h"

#include <cassert>
#include <string>

/**
 * 根据tars生成c#文件
 * 包括结构的编解码以及生成Proxy和Servant
 */
class Tars2Cs
{
public:
    /**
     * 设置生成文件的目录
     *
     */
    void setBaseDir(const string &dir);

    /**
     * 设置前缀
     * @param prefix
     */
    void setBasePackage(const string &prefix);

    /**
     * 设置是否生成Servant
     */
    void setWithServant(bool bWithServant) { _bWithServant = bWithServant;}

    /**
     * 生成文件
     * @param file
     */
    void createFile(const string &file);

protected:
    /**
     * 获取命名空间的文件路径
     * @param ns 命名空间
     *
     * @return string
     */
    string getFilePath(const string &ns) const;

    string _packagePrefix;
    string _baseDir;
    bool   _bWithServant;

    //下面是编解码的源码生成
protected:

    /**
     * 生成xml
     * @param pPtr
     *
     * @return string
     */
    string writeTo(const TypeIdPtr &pPtr) const;

    /**
     * 生成xml
     * @param pPtr
     *
     * @return string
     */
    string readFrom(const TypeIdPtr &pPtr) const;

    /**
     * 
     * @param pPtr
     * 
     * @return string
     */
    string display(const TypeIdPtr &pPtr) const;

    //下面是类型描述的源码生成
protected:

    /*
     * 生成某类型的初始化字符串
     * @param pPtr
     *
     * @return string
     */
    string toTypeInit(const TypePtr &pPtr) const;

    /**
     * 生成某类型的对应对象的字符串描述源码
     * @param pPtr
     *
     * @return string
     */
    string toObjStr(const TypePtr &pPtr) const;

    /**
     * 判断是否是对象类型
     */
    bool isObjType(const TypePtr &pPtr) const;

    /**
     * 生成某类型的字符串描述源码
     * @param pPtr
     *
     * @return string
     */
    string tostr(const TypePtr &pPtr) const;

    /**
     * 生成内建类型的字符串源码
     * @param pPtr
     *
     * @return string
     */
    string tostrBuiltin(const BuiltinPtr &pPtr) const;
    /**
     * 生成vector的字符串描述
     * @param pPtr
     *
     * @return string
     */
    string tostrVector(const VectorPtr &pPtr) const;

    /**
     * 生成map的字符串描述
     * @param pPtr
     *
     * @return string
     */
    string tostrMap(const MapPtr &pPtr, bool bNew = false) const;

    /**
     * 生成某种结构的符串描述
     * @param pPtr
     *
     * @return string
     */
    string tostrStruct(const StructPtr &pPtr) const;

    /**
     * 生成某种枚举的符串描述
     * @param pPtr
     *
     * @return string
     */
    string tostrEnum(const EnumPtr &pPtr) const;

    /**
     * 生成某类型的解码源码
     * @param pPtr
     *
     * @return string
     */
    string decode(const TypeIdPtr &pPtr) const;

    /**
     * 生成某类型的编码源码
     * @param pPtr
     *
     * @return string
     */
    string encode(const TypeIdPtr &pPtr) const;

    //下面是生成头文件的源码生成
protected:
    /**
     * 生成结构的头文件源码
     * @param pPtr
     *
     * @return string
     */
    string generateCs(const StructPtr &pPtr, const NamespacePtr &nPtr) const;

    /**
     * 生成容器头文件源码
     * @param pPtr
     *
     * @return string
     */
    string generateCs(const ContainerPtr &pPtr) const;

    /**
     * 生成参数头文件源码
     * @param pPtr
     *
     * @return string
     */
    string generateCs(const ParamDeclPtr &pPtr) const;

    /**
     * 生成枚举头文件源码
     * @param pPtr
     *
     * @return string
     */
    string generateCs(const EnumPtr &pPtr, const NamespacePtr &nPtr) const;

    /**
     * 生成常量头文件源码
     * @param pPtr
     * 
     * @return string
     */
    void generateCs(const ConstPtr &pPtr, const NamespacePtr &nPtr) const;

    void generateCs(const vector<EnumPtr> &es,const vector<ConstPtr> &cs,const NamespacePtr &nPtr) const;
    /**
     * 生成命名空间头文件源码
     * @param pPtr
     *
     * @return string
     */
    void generateCs(const NamespacePtr &pPtr) const;

    /**
     * 生成每个tars文件的源码
     * @param pPtr
     *
     * @return string
     */
    void generateCs(const ContextPtr &pPtr) const;

};

#endif


