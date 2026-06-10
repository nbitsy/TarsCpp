/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 17 "tars.y"

#include <iostream>
#include <memory>
#include <cassert>

using namespace std;

#define YYSTYPE GrammarBasePtr

#include "parse.h"
#define YYDEBUG 1
#define YYINITDEPTH 10000

#line 85 "tars.tab.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "tars.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TARS_VOID = 3,                  /* TARS_VOID  */
  YYSYMBOL_TARS_STRUCT = 4,                /* TARS_STRUCT  */
  YYSYMBOL_TARS_BOOL = 5,                  /* TARS_BOOL  */
  YYSYMBOL_TARS_BYTE = 6,                  /* TARS_BYTE  */
  YYSYMBOL_TARS_BYTES = 7,                 /* TARS_BYTES  */
  YYSYMBOL_TARS_SHORT = 8,                 /* TARS_SHORT  */
  YYSYMBOL_TARS_INT = 9,                   /* TARS_INT  */
  YYSYMBOL_TARS_DOUBLE = 10,               /* TARS_DOUBLE  */
  YYSYMBOL_TARS_FLOAT = 11,                /* TARS_FLOAT  */
  YYSYMBOL_TARS_LONG = 12,                 /* TARS_LONG  */
  YYSYMBOL_TARS_STRING = 13,               /* TARS_STRING  */
  YYSYMBOL_TARS_VECTOR = 14,               /* TARS_VECTOR  */
  YYSYMBOL_TARS_MAP = 15,                  /* TARS_MAP  */
  YYSYMBOL_TARS_NAMESPACE = 16,            /* TARS_NAMESPACE  */
  YYSYMBOL_TARS_INTERFACE = 17,            /* TARS_INTERFACE  */
  YYSYMBOL_TARS_IDENTIFIER = 18,           /* TARS_IDENTIFIER  */
  YYSYMBOL_TARS_OUT = 19,                  /* TARS_OUT  */
  YYSYMBOL_TARS_OP = 20,                   /* TARS_OP  */
  YYSYMBOL_TARS_KEY = 21,                  /* TARS_KEY  */
  YYSYMBOL_TARS_ROUTE_KEY = 22,            /* TARS_ROUTE_KEY  */
  YYSYMBOL_TARS_REQUIRE = 23,              /* TARS_REQUIRE  */
  YYSYMBOL_TARS_OPTIONAL = 24,             /* TARS_OPTIONAL  */
  YYSYMBOL_TARS_CONST_INTEGER = 25,        /* TARS_CONST_INTEGER  */
  YYSYMBOL_TARS_CONST_FLOAT = 26,          /* TARS_CONST_FLOAT  */
  YYSYMBOL_TARS_FALSE = 27,                /* TARS_FALSE  */
  YYSYMBOL_TARS_TRUE = 28,                 /* TARS_TRUE  */
  YYSYMBOL_TARS_STRING_LITERAL = 29,       /* TARS_STRING_LITERAL  */
  YYSYMBOL_TARS_SCOPE_DELIMITER = 30,      /* TARS_SCOPE_DELIMITER  */
  YYSYMBOL_TARS_CONST = 31,                /* TARS_CONST  */
  YYSYMBOL_TARS_ENUM = 32,                 /* TARS_ENUM  */
  YYSYMBOL_TARS_UNSIGNED = 33,             /* TARS_UNSIGNED  */
  YYSYMBOL_BAD_CHAR = 34,                  /* BAD_CHAR  */
  YYSYMBOL_35_ = 35,                       /* ';'  */
  YYSYMBOL_36_ = 36,                       /* '{'  */
  YYSYMBOL_37_ = 37,                       /* '}'  */
  YYSYMBOL_38_ = 38,                       /* ','  */
  YYSYMBOL_39_ = 39,                       /* '='  */
  YYSYMBOL_40_ = 40,                       /* '['  */
  YYSYMBOL_41_ = 41,                       /* ']'  */
  YYSYMBOL_42_ = 42,                       /* ')'  */
  YYSYMBOL_43_ = 43,                       /* '*'  */
  YYSYMBOL_44_ = 44,                       /* ':'  */
  YYSYMBOL_45_ = 45,                       /* '<'  */
  YYSYMBOL_46_ = 46,                       /* '>'  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_start = 48,                     /* start  */
  YYSYMBOL_definitions = 49,               /* definitions  */
  YYSYMBOL_50_1 = 50,                      /* $@1  */
  YYSYMBOL_51_2 = 51,                      /* $@2  */
  YYSYMBOL_definition = 52,                /* definition  */
  YYSYMBOL_enum_def = 53,                  /* enum_def  */
  YYSYMBOL_54_3 = 54,                      /* @3  */
  YYSYMBOL_enum_id = 55,                   /* enum_id  */
  YYSYMBOL_enumerator_list = 56,           /* enumerator_list  */
  YYSYMBOL_enumerator = 57,                /* enumerator  */
  YYSYMBOL_namespace_def = 58,             /* namespace_def  */
  YYSYMBOL_59_4 = 59,                      /* @4  */
  YYSYMBOL_key_def = 60,                   /* key_def  */
  YYSYMBOL_61_5 = 61,                      /* $@5  */
  YYSYMBOL_key_members = 62,               /* key_members  */
  YYSYMBOL_interface_def = 63,             /* interface_def  */
  YYSYMBOL_64_6 = 64,                      /* @6  */
  YYSYMBOL_interface_id = 65,              /* interface_id  */
  YYSYMBOL_interface_exports = 66,         /* interface_exports  */
  YYSYMBOL_interface_export = 67,          /* interface_export  */
  YYSYMBOL_operation = 68,                 /* operation  */
  YYSYMBOL_operation_preamble = 69,        /* operation_preamble  */
  YYSYMBOL_return_type = 70,               /* return_type  */
  YYSYMBOL_parameters = 71,                /* parameters  */
  YYSYMBOL_routekey_qualifier = 72,        /* routekey_qualifier  */
  YYSYMBOL_out_qualifier = 73,             /* out_qualifier  */
  YYSYMBOL_struct_def = 74,                /* struct_def  */
  YYSYMBOL_75_7 = 75,                      /* @7  */
  YYSYMBOL_struct_id = 76,                 /* struct_id  */
  YYSYMBOL_struct_exports = 77,            /* struct_exports  */
  YYSYMBOL_data_member = 78,               /* data_member  */
  YYSYMBOL_struct_type_id = 79,            /* struct_type_id  */
  YYSYMBOL_const_initializer = 80,         /* const_initializer  */
  YYSYMBOL_const_def = 81,                 /* const_def  */
  YYSYMBOL_type_id = 82,                   /* type_id  */
  YYSYMBOL_type = 83,                      /* type  */
  YYSYMBOL_type_no = 84,                   /* type_no  */
  YYSYMBOL_vector = 85,                    /* vector  */
  YYSYMBOL_map = 86,                       /* map  */
  YYSYMBOL_scoped_name = 87,               /* scoped_name  */
  YYSYMBOL_keyword = 88                    /* keyword  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  77
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   629

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  140
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  202

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   289


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    42,    43,     2,    38,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    44,    35,
      45,    39,    46,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    40,     2,    41,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    36,     2,    37,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    69,    69,    76,    75,    80,    79,    84,    89,    96,
     100,   104,   108,   111,   115,   125,   124,   147,   160,   171,
     175,   183,   194,   199,   213,   221,   220,   254,   253,   272,
     285,   305,   304,   338,   342,   353,   356,   359,   364,   371,
     377,   394,   423,   424,   435,   437,   448,   459,   471,   483,
     495,   507,   511,   520,   531,   543,   542,   584,   588,   594,
     603,   607,   612,   621,   630,   648,   670,   692,   709,   713,
     717,   721,   730,   740,   750,   758,   766,   774,   787,   807,
     825,   834,   844,   854,   863,   868,   872,   881,   890,   894,
     903,   907,   911,   915,   919,   923,   927,   931,   935,   939,
     943,   947,   951,   955,   959,   963,   981,   985,   989,   993,
    1002,  1006,  1015,  1018,  1024,  1037,  1040,  1043,  1046,  1049,
    1052,  1055,  1058,  1061,  1064,  1067,  1070,  1073,  1076,  1079,
    1082,  1085,  1088,  1091,  1094,  1097,  1100,  1103,  1106,  1109,
    1112
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TARS_VOID",
  "TARS_STRUCT", "TARS_BOOL", "TARS_BYTE", "TARS_BYTES", "TARS_SHORT",
  "TARS_INT", "TARS_DOUBLE", "TARS_FLOAT", "TARS_LONG", "TARS_STRING",
  "TARS_VECTOR", "TARS_MAP", "TARS_NAMESPACE", "TARS_INTERFACE",
  "TARS_IDENTIFIER", "TARS_OUT", "TARS_OP", "TARS_KEY", "TARS_ROUTE_KEY",
  "TARS_REQUIRE", "TARS_OPTIONAL", "TARS_CONST_INTEGER",
  "TARS_CONST_FLOAT", "TARS_FALSE", "TARS_TRUE", "TARS_STRING_LITERAL",
  "TARS_SCOPE_DELIMITER", "TARS_CONST", "TARS_ENUM", "TARS_UNSIGNED",
  "BAD_CHAR", "';'", "'{'", "'}'", "','", "'='", "'['", "']'", "')'",
  "'*'", "':'", "'<'", "'>'", "$accept", "start", "definitions", "$@1",
  "$@2", "definition", "enum_def", "@3", "enum_id", "enumerator_list",
  "enumerator", "namespace_def", "@4", "key_def", "$@5", "key_members",
  "interface_def", "@6", "interface_id", "interface_exports",
  "interface_export", "operation", "operation_preamble", "return_type",
  "parameters", "routekey_qualifier", "out_qualifier", "struct_def", "@7",
  "struct_id", "struct_exports", "data_member", "struct_type_id",
  "const_initializer", "const_def", "type_id", "type", "type_no", "vector",
  "map", "scoped_name", "keyword", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-145)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-115)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     475,   -22,   307,    -4,   505,    20,   396,   536,    46,  -145,
      26,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,
    -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,
    -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,
    -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,
    -145,  -145,  -145,    14,  -145,  -145,  -145,  -145,  -145,  -145,
    -145,  -145,  -145,  -145,     9,    18,  -145,    31,    30,    23,
     185,    21,  -145,  -145,    36,  -145,  -145,  -145,    32,    33,
      50,    52,   147,    53,   -19,  -145,   426,   456,  -145,  -145,
    -145,  -145,  -145,    67,     3,    72,  -145,     6,    73,   147,
     567,   257,   224,  -145,   272,  -145,  -145,     4,  -145,    60,
      38,  -145,  -145,  -145,  -145,  -145,  -145,    71,    78,    79,
    -145,  -145,  -145,  -145,  -145,    66,    86,    68,  -145,    74,
    -145,    87,    75,  -145,    15,   106,  -145,   396,   396,   336,
      90,    94,  -145,  -145,    93,   116,  -145,  -145,   596,   117,
      95,  -145,    67,  -145,   567,   257,  -145,   257,  -145,  -145,
      17,    69,   107,  -145,  -145,  -145,  -145,   396,   396,  -145,
    -145,   224,  -145,  -145,   -26,    92,   109,  -145,  -145,  -145,
    -145,  -145,   366,  -145,  -145,  -145,   102,   103,  -145,   128,
    -145,  -145,   396,   396,  -145,    67,    67,  -145,  -145,  -145,
    -145,  -145
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       7,    13,    15,     9,    12,    10,    31,    11,    55,    14,
       5,    59,   116,   115,   117,   118,   119,   120,   121,   123,
     122,   124,   125,   127,   128,   129,    57,   130,   126,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,    58,
      25,    33,    34,     0,    86,    90,    91,    92,    94,    96,
     101,   100,    98,   102,     0,     0,   112,     0,     0,     0,
      85,    88,   103,   104,   105,    17,    18,     1,     0,     0,
       0,     0,     0,     0,     0,   109,     0,     0,   113,    93,
      95,    97,    99,     0,    80,     0,    84,     0,     0,     0,
      24,     0,     0,     6,     0,    27,   107,     0,   111,     0,
      77,    72,    73,    75,    76,    74,    79,     0,     0,     0,
      82,    89,    87,   114,     4,    21,     0,    20,    22,     0,
      43,     0,    37,    39,     0,     0,    42,     0,     0,     0,
       0,    61,    63,    71,     0,     0,   108,   106,     0,     0,
       0,    83,     0,    16,    24,     0,    32,     0,    54,    53,
       0,     0,     0,    45,    41,    68,    69,     0,     0,    70,
      56,     0,    26,    29,     0,     0,    78,    81,    23,    19,
      36,    35,     0,    40,    49,    47,    64,    67,    60,     0,
      28,   110,     0,     0,    46,     0,     0,    30,    50,    48,
      65,    66
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -145,  -145,   -64,  -145,  -145,  -145,  -145,  -145,  -145,    -2,
    -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,   -99,
    -145,  -145,  -145,  -145,  -145,   -32,   -29,  -145,  -145,  -145,
     -17,  -145,  -145,  -144,  -145,    -6,   -84,  -145,  -145,  -145,
     -52,     2
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     8,     9,    78,    82,    10,    11,    79,    12,   126,
     127,    13,    83,    14,   145,   174,    15,    80,    16,   131,
     132,   133,   134,   135,   160,   161,   162,    17,    81,    18,
     140,   141,   142,   116,    19,   143,    70,    71,    72,    73,
      74,   128
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      69,    84,   107,   109,    49,   146,    52,   121,   178,    76,
      85,    98,   189,    20,    50,   190,    54,   136,   103,   105,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,   122,    66,    66,   158,   124,    89,   159,    90,    91,
     144,   117,    92,   118,    67,    67,    77,   119,    68,    88,
     147,   200,   201,   -44,    86,   182,   180,   -44,   181,   183,
      53,    -3,    93,    87,   175,    97,    98,    99,  -112,   100,
      54,   136,    96,   136,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,   110,   101,    66,   102,   104,
     120,   123,   111,   112,   113,   114,   115,    67,   148,    67,
     117,   149,    68,   150,   151,   152,   154,   -52,    54,   155,
     157,   -52,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,   153,   156,    66,   164,   170,   163,   171,
     172,   165,   166,   169,   173,   176,   177,    67,   191,  -114,
      68,   195,   196,   117,   117,   -51,   197,    -8,     1,   -51,
     192,     2,   179,   193,   188,   184,   185,     0,     0,     0,
       0,   186,   187,     3,     4,     0,     0,     0,     5,     0,
       0,     0,     0,     0,     0,     0,   194,     0,     6,     7,
       0,     0,     0,     0,    -8,     0,   198,   199,    22,    23,
      24,    25,    26,    27,    28,    29,    30,     0,    31,    32,
      33,    34,    35,    94,    37,     0,    38,     0,    39,    40,
      41,    42,    43,    44,    45,     0,    46,    47,    48,     0,
       0,     0,     0,     0,     0,    54,     0,     0,    95,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
       0,     0,    66,     0,     0,     0,     0,   137,   138,   139,
       0,     0,     0,     0,    67,     0,     0,    68,   129,     0,
     130,   -62,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,     1,     0,    66,     2,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    67,     3,     4,
      68,     0,     0,     5,   -38,     0,     0,     0,     0,     0,
       0,     0,     0,     6,     7,     0,     0,     0,    21,    -8,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     0,
      31,    32,    33,    34,    35,    36,    37,     0,    38,     0,
      39,    40,    41,    42,    43,    44,    45,    54,    46,    47,
      48,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,     0,     0,    66,     0,     0,     0,     0,   167,
     168,     0,     0,     0,     0,     0,    67,    54,     0,    68,
       0,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,     0,     0,    66,   158,     0,     0,   159,     0,
       0,     0,     0,     0,     0,     0,    67,    54,     0,    68,
       0,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,     0,     0,    66,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    67,   106,     0,    68,
       0,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,     0,     0,    66,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    67,   108,     0,    68,
       0,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,     0,     0,    66,    -8,     1,     0,     0,     2,
       0,     0,     0,     0,     0,     0,    67,     0,     0,    68,
       0,     3,     4,     0,     0,     0,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     6,     7,    22,    23,
      24,    25,    26,    27,    28,    29,    30,     0,    31,    32,
      33,    34,    35,    51,    37,     0,    38,     0,    39,    40,
      41,    42,    43,    44,    45,     0,    46,    47,    48,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     0,    31,
      32,    33,    34,    35,    75,    37,     0,    38,     0,    39,
      40,    41,    42,    43,    44,    45,     0,    46,    47,    48,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     0,
      31,    32,    33,    34,    35,   125,    37,     0,    38,     0,
      39,    40,    41,    42,    43,    44,    45,     0,    46,    47,
      48,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,     0,     0,    66,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    67,     0,     0,    68
};

static const yytype_int16 yycheck[] =
{
       6,    53,    86,    87,     2,     1,     4,     1,   152,     7,
       1,    30,    38,    35,    18,    41,     1,   101,    82,    38,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    25,    18,    18,    19,    99,     6,    22,     8,     9,
     104,    93,    12,    40,    30,    30,     0,    44,    33,    18,
      46,   195,   196,    38,    45,    38,   155,    42,   157,    42,
      40,    35,    39,    45,   148,    44,    30,    35,    30,    36,
       1,   155,    70,   157,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    18,    36,    18,    36,    36,
      18,    18,    25,    26,    27,    28,    29,    30,    38,    30,
     152,    30,    33,    25,    25,    39,    38,    38,     1,    35,
      35,    42,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    37,    37,    18,    20,    37,   134,    35,
      37,   137,   138,   139,    18,    18,    41,    30,    46,    30,
      33,    39,    39,   195,   196,    38,    18,     0,     1,    42,
     182,     4,   154,   182,   171,   161,   162,    -1,    -1,    -1,
      -1,   167,   168,    16,    17,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   182,    -1,    31,    32,
      -1,    -1,    -1,    -1,    37,    -1,   192,   193,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    -1,    23,    24,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    43,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    33,     1,    -1,
       3,    37,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,     1,    -1,    18,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    16,    17,
      33,    -1,    -1,    21,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,     1,    37,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    -1,
      23,    24,    25,    26,    27,    28,    29,     1,    31,    32,
      33,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,     1,    -1,    33,
      -1,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    18,    19,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,     1,    -1,    33,
      -1,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,     1,    -1,    33,
      -1,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,     1,    -1,    33,
      -1,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    18,     0,     1,    -1,    -1,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    33,
      -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    -1,    23,    24,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    -1,    23,
      24,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    -1,
      23,    24,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    33
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     4,    16,    17,    21,    31,    32,    48,    49,
      52,    53,    55,    58,    60,    63,    65,    74,    76,    81,
      35,     1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    13,    14,    15,    16,    17,    18,    19,    21,    23,
      24,    25,    26,    27,    28,    29,    31,    32,    33,    88,
      18,    18,    88,    40,     1,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    18,    30,    33,    82,
      83,    84,    85,    86,    87,    18,    88,     0,    50,    54,
      64,    75,    51,    59,    87,     1,    45,    45,    18,     6,
       8,     9,    12,    39,    18,    43,    88,    44,    30,    35,
      36,    36,    36,    49,    36,    38,     1,    83,     1,    83,
      18,    25,    26,    27,    28,    29,    80,    87,    40,    44,
      18,     1,    25,    18,    49,    18,    56,    57,    88,     1,
       3,    66,    67,    68,    69,    70,    83,    23,    24,    25,
      77,    78,    79,    82,    49,    61,     1,    46,    38,    30,
      25,    25,    39,    37,    38,    35,    37,    35,    19,    22,
      71,    72,    73,    82,    20,    82,    82,    23,    24,    82,
      37,    35,    37,    18,    62,    83,    18,    41,    80,    56,
      66,    66,    38,    42,    82,    82,    82,    82,    77,    38,
      41,    46,    72,    73,    82,    39,    39,    18,    82,    82,
      80,    80
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    50,    49,    51,    49,    49,    49,    52,
      52,    52,    52,    52,    52,    54,    53,    55,    55,    56,
      56,    57,    57,    57,    57,    59,    58,    61,    60,    62,
      62,    64,    63,    65,    65,    66,    66,    66,    66,    67,
      68,    69,    70,    70,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    72,    73,    75,    74,    76,    76,    76,
      77,    77,    77,    78,    79,    79,    79,    79,    79,    79,
      79,    79,    80,    80,    80,    80,    80,    80,    80,    81,
      82,    82,    82,    82,    82,    82,    82,    83,    83,    83,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    85,    85,    85,    85,
      86,    86,    87,    87,    87,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     4,     0,     4,     1,     0,     1,
       1,     1,     1,     1,     1,     0,     5,     2,     2,     3,
       1,     1,     1,     3,     0,     0,     6,     0,     7,     1,
       3,     0,     5,     2,     2,     3,     3,     1,     0,     1,
       3,     2,     1,     1,     0,     1,     3,     2,     4,     2,
       4,     1,     1,     1,     1,     0,     5,     2,     2,     2,
       3,     1,     0,     1,     3,     5,     5,     3,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     3,     4,
       2,     5,     3,     4,     2,     1,     1,     3,     1,     3,
       1,     1,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     4,     3,     4,     2,
       6,     3,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3: /* $@1: %empty  */
#line 76 "tars.y"
{
}
#line 1400 "tars.tab.cpp"
    break;

  case 5: /* $@2: %empty  */
#line 80 "tars.y"
{
    yyerrok;
}
#line 1408 "tars.tab.cpp"
    break;

  case 7: /* definitions: definition  */
#line 85 "tars.y"
{
    g_parse->error("`;' missing after definition");
}
#line 1416 "tars.tab.cpp"
    break;

  case 8: /* definitions: %empty  */
#line 89 "tars.y"
{
}
#line 1423 "tars.tab.cpp"
    break;

  case 9: /* definition: namespace_def  */
#line 97 "tars.y"
{
    assert(yyvsp[0] == 0 || NamespacePtr::dynamicCast(yyvsp[0]));
}
#line 1431 "tars.tab.cpp"
    break;

  case 10: /* definition: interface_def  */
#line 101 "tars.y"
{
    assert(yyvsp[0] == 0 || InterfacePtr::dynamicCast(yyvsp[0]));
}
#line 1439 "tars.tab.cpp"
    break;

  case 11: /* definition: struct_def  */
#line 105 "tars.y"
{
    assert(yyvsp[0] == 0 || StructPtr::dynamicCast(yyvsp[0]));
}
#line 1447 "tars.tab.cpp"
    break;

  case 12: /* definition: key_def  */
#line 109 "tars.y"
{
}
#line 1454 "tars.tab.cpp"
    break;

  case 13: /* definition: enum_def  */
#line 112 "tars.y"
{
    assert(yyvsp[0] == 0 || EnumPtr::dynamicCast(yyvsp[0]));
}
#line 1462 "tars.tab.cpp"
    break;

  case 14: /* definition: const_def  */
#line 116 "tars.y"
{
    assert(yyvsp[0] == 0 || ConstPtr::dynamicCast(yyvsp[0]));
}
#line 1470 "tars.tab.cpp"
    break;

  case 15: /* @3: %empty  */
#line 125 "tars.y"
{
    yyval = yyvsp[0];
}
#line 1478 "tars.tab.cpp"
    break;

  case 16: /* enum_def: enum_id @3 '{' enumerator_list '}'  */
#line 129 "tars.y"
{
    if(yyvsp[-2])
    {
        g_parse->popContainer();
        yyval = yyvsp[-2];
    }
    else
    {
        yyval = 0;
    }

    yyval = yyvsp[-3];
}
#line 1496 "tars.tab.cpp"
    break;

  case 17: /* enum_id: TARS_ENUM TARS_IDENTIFIER  */
#line 148 "tars.y"
{
    NamespacePtr c = NamespacePtr::dynamicCast(g_parse->currentContainer());
    if(!c)
    {
        g_parse->error("enum must define in namespace");
    }
    StringGrammarPtr ident  = StringGrammarPtr::dynamicCast(yyvsp[0]);
    EnumPtr e = c->createEnum(ident->v);
    g_parse->pushContainer(e);

    yyval = e;
}
#line 1513 "tars.tab.cpp"
    break;

  case 18: /* enum_id: TARS_ENUM keyword  */
#line 161 "tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);
    g_parse->error("keyword `" + ident->v + "' cannot be used as enumeration name");
    yyval = yyvsp[0];
}
#line 1523 "tars.tab.cpp"
    break;

  case 19: /* enumerator_list: enumerator ',' enumerator_list  */
#line 172 "tars.y"
{
    yyval = yyvsp[-1];
}
#line 1531 "tars.tab.cpp"
    break;

  case 20: /* enumerator_list: enumerator  */
#line 176 "tars.y"
{
}
#line 1538 "tars.tab.cpp"
    break;

  case 21: /* enumerator: TARS_IDENTIFIER  */
#line 184 "tars.y"
{
    TypePtr type        = TypePtr::dynamicCast(g_parse->createBuiltin(Builtin::KindLong));
    StringGrammarPtr ident  = StringGrammarPtr::dynamicCast(yyvsp[0]);
    TypeIdPtr tPtr      = new TypeId(type, ident->v);
    tPtr->disableDefault();
    EnumPtr e = EnumPtr::dynamicCast(g_parse->currentContainer());
    assert(e);
    e->addMember(tPtr);
    yyval = e;
}
#line 1553 "tars.tab.cpp"
    break;

  case 22: /* enumerator: keyword  */
#line 195 "tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);
    g_parse->error("keyword `" + ident->v + "' cannot be used as enumerator");
}
#line 1562 "tars.tab.cpp"
    break;

  case 23: /* enumerator: TARS_IDENTIFIER '=' const_initializer  */
#line 200 "tars.y"
{
    TypePtr type        = TypePtr::dynamicCast(g_parse->createBuiltin(Builtin::KindLong));
    StringGrammarPtr ident  = StringGrammarPtr::dynamicCast(yyvsp[-2]);
    TypeIdPtr tPtr      = new TypeId(type, ident->v);
    ConstGrammarPtr sPtr    = ConstGrammarPtr::dynamicCast(yyvsp[0]);
    g_parse->checkConstValue(tPtr, sPtr->t);
    tPtr->setDefault(sPtr->v);
    EnumPtr e = EnumPtr::dynamicCast(g_parse->currentContainer());
    assert(e);
    e->addMember(tPtr);
    yyval = e;
}
#line 1579 "tars.tab.cpp"
    break;

  case 24: /* enumerator: %empty  */
#line 213 "tars.y"
{
}
#line 1586 "tars.tab.cpp"
    break;

  case 25: /* @4: %empty  */
#line 221 "tars.y"
{
    StringGrammarPtr ident  = StringGrammarPtr::dynamicCast(yyvsp[0]);
    ContainerPtr c      = g_parse->currentContainer();
    NamespacePtr n      = c->createNamespace(ident->v);
    if(n)
    {
        g_parse->pushContainer(n);
        yyval = GrammarBasePtr::dynamicCast(n);
    }
    else
    {
        yyval = 0;
    }
}
#line 1605 "tars.tab.cpp"
    break;

  case 26: /* namespace_def: TARS_NAMESPACE TARS_IDENTIFIER @4 '{' definitions '}'  */
#line 236 "tars.y"
{
    if(yyvsp[-3])
    {
        g_parse->popContainer();
        yyval = yyvsp[-3];
    }
    else
    {
        yyval = 0;
    }
}
#line 1621 "tars.tab.cpp"
    break;

  case 27: /* $@5: %empty  */
#line 254 "tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[-1]);
    StructPtr sp = StructPtr::dynamicCast(g_parse->findUserType(ident->v));
    if(!sp)
    {
        g_parse->error("struct '" + ident->v + "' undefined!");
    }

    g_parse->setKeyStruct(sp);
}
#line 1636 "tars.tab.cpp"
    break;

  case 28: /* key_def: TARS_KEY '[' scoped_name ',' $@5 key_members ']'  */
#line 265 "tars.y"
{
}
#line 1643 "tars.tab.cpp"
    break;

  case 29: /* key_members: TARS_IDENTIFIER  */
#line 273 "tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);
    StructPtr np = g_parse->getKeyStruct();
    if(np)
    {
        np->addKey(ident->v);
    }
    else
    {
        yyval = 0;
    }
}
#line 1660 "tars.tab.cpp"
    break;

  case 30: /* key_members: key_members ',' TARS_IDENTIFIER  */
#line 286 "tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);
    StructPtr np = g_parse->getKeyStruct();
    if(np)
    {
        np->addKey(ident->v);
    }
    else
    {
        yyval = 0;
    }   
}
#line 1677 "tars.tab.cpp"
    break;

  case 31: /* @6: %empty  */
#line 305 "tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);

    NamespacePtr c = NamespacePtr::dynamicCast(g_parse->currentContainer());

    InterfacePtr cl = c->createInterface(ident->v);
    if(cl)
    {
        g_parse->pushContainer(cl);
        yyval = GrammarBasePtr::dynamicCast(cl);
    }
    else
    {
        yyval = 0;
    }
}
#line 1698 "tars.tab.cpp"
    break;

  case 32: /* interface_def: interface_id @6 '{' interface_exports '}'  */
#line 322 "tars.y"
{
    if(yyvsp[-3])
    {
       g_parse->popContainer();
       yyval = GrammarBasePtr::dynamicCast(yyvsp[-3]);
    }
    else
    {
       yyval = 0;
    }
}
#line 1714 "tars.tab.cpp"
    break;

  case 33: /* interface_id: TARS_INTERFACE TARS_IDENTIFIER  */
#line 339 "tars.y"
{
    yyval = yyvsp[0];
}
#line 1722 "tars.tab.cpp"
    break;

  case 34: /* interface_id: TARS_INTERFACE keyword  */
#line 343 "tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);
    g_parse->error("keyword `" + ident->v + "' cannot be used as interface name");
    yyval = yyvsp[0];
}
#line 1732 "tars.tab.cpp"
    break;

  case 35: /* interface_exports: interface_export ';' interface_exports  */
#line 354 "tars.y"
{
}
#line 1739 "tars.tab.cpp"
    break;

  case 36: /* interface_exports: error ';' interface_exports  */
#line 357 "tars.y"
{
}
#line 1746 "tars.tab.cpp"
    break;

  case 37: /* interface_exports: interface_export  */
#line 360 "tars.y"
{
    g_parse->error("`;' missing after definition");
}
#line 1754 "tars.tab.cpp"
    break;

  case 38: /* interface_exports: %empty  */
#line 364 "tars.y"
{
}
#line 1761 "tars.tab.cpp"
    break;

  case 40: /* operation: operation_preamble parameters ')'  */
#line 378 "tars.y"
{
    if(yyvsp[-2])
    {
        g_parse->popContainer();
        yyval = GrammarBasePtr::dynamicCast(yyvsp[-2]);
    }
    else
    {
        yyval = 0;
    }
}
#line 1777 "tars.tab.cpp"
    break;

  case 41: /* operation_preamble: return_type TARS_OP  */
#line 395 "tars.y"
{
    TypePtr returnType = TypePtr::dynamicCast(yyvsp[-1]);
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);
    string name        = ident->v;
    InterfacePtr cl    = InterfacePtr::dynamicCast(g_parse->currentContainer());
    if(cl)
    {
         OperationPtr op = cl->createOperation(name, returnType);
         if(op)
         {
             g_parse->pushContainer(op);
             yyval = GrammarBasePtr::dynamicCast(op);
         }
         else
         {
             yyval = 0;
         }
    }
    else
    {
        yyval = 0;
    }
}
#line 1805 "tars.tab.cpp"
    break;

  case 43: /* return_type: TARS_VOID  */
#line 425 "tars.y"
{
    yyval = 0;
}
#line 1813 "tars.tab.cpp"
    break;

  case 44: /* parameters: %empty  */
#line 435 "tars.y"
{
}
#line 1820 "tars.tab.cpp"
    break;

  case 45: /* parameters: type_id  */
#line 438 "tars.y"
{
    TypeIdPtr  tsp         = TypeIdPtr::dynamicCast(yyvsp[0]);

    OperationPtr op = OperationPtr::dynamicCast(g_parse->currentContainer());
    assert(op);
    if(op)
    {
        op->createParamDecl(tsp, false, false);
    }
}
#line 1835 "tars.tab.cpp"
    break;

  case 46: /* parameters: parameters ',' type_id  */
#line 449 "tars.y"
{
    TypeIdPtr  tsp         = TypeIdPtr::dynamicCast(yyvsp[0]);

    OperationPtr op = OperationPtr::dynamicCast(g_parse->currentContainer());
    assert(op);
    if(op)
    {
        op->createParamDecl(tsp, false, false);
    }
}
#line 1850 "tars.tab.cpp"
    break;

  case 47: /* parameters: out_qualifier type_id  */
#line 460 "tars.y"
{
    BoolGrammarPtr isOutParam  = BoolGrammarPtr::dynamicCast(yyvsp[-1]);
    TypeIdPtr  tsp         = TypeIdPtr::dynamicCast(yyvsp[0]);

    OperationPtr op = OperationPtr::dynamicCast(g_parse->currentContainer());
    assert(op);
    if(op)
    {
        op->createParamDecl(tsp, isOutParam->v, false);
    }
}
#line 1866 "tars.tab.cpp"
    break;

  case 48: /* parameters: parameters ',' out_qualifier type_id  */
#line 472 "tars.y"
{
    BoolGrammarPtr isOutParam  = BoolGrammarPtr::dynamicCast(yyvsp[-1]);
    TypeIdPtr  tsp         = TypeIdPtr::dynamicCast(yyvsp[0]);

    OperationPtr op = OperationPtr::dynamicCast(g_parse->currentContainer());
    assert(op);
    if(op)
    {
        op->createParamDecl(tsp, isOutParam->v, false);
    }
}
#line 1882 "tars.tab.cpp"
    break;

  case 49: /* parameters: routekey_qualifier type_id  */
#line 484 "tars.y"
{
    BoolGrammarPtr isRouteKeyParam  = BoolGrammarPtr::dynamicCast(yyvsp[-1]);
    TypeIdPtr  tsp              = TypeIdPtr::dynamicCast(yyvsp[0]);

    OperationPtr op = OperationPtr::dynamicCast(g_parse->currentContainer());
    assert(op);
    if(op)
    {
         op->createParamDecl(tsp, false, isRouteKeyParam->v);
    }
}
#line 1898 "tars.tab.cpp"
    break;

  case 50: /* parameters: parameters ',' routekey_qualifier type_id  */
#line 496 "tars.y"
{
    BoolGrammarPtr isRouteKeyParam = BoolGrammarPtr::dynamicCast(yyvsp[-1]);
    TypeIdPtr  tsp             = TypeIdPtr::dynamicCast(yyvsp[0]);

    OperationPtr op = OperationPtr::dynamicCast(g_parse->currentContainer());
    assert(op);
    if(op)
    {
         op->createParamDecl(tsp, false, isRouteKeyParam->v);
    }
}
#line 1914 "tars.tab.cpp"
    break;

  case 51: /* parameters: out_qualifier  */
#line 508 "tars.y"
{
    g_parse->error("'out' must be defined with a type");
}
#line 1922 "tars.tab.cpp"
    break;

  case 52: /* parameters: routekey_qualifier  */
#line 512 "tars.y"
{
    g_parse->error("'routekey' must be defined with a type");
}
#line 1930 "tars.tab.cpp"
    break;

  case 53: /* routekey_qualifier: TARS_ROUTE_KEY  */
#line 521 "tars.y"
{
    BoolGrammarPtr routekey = new BoolGrammar;
    routekey->v = true;
    yyval = GrammarBasePtr::dynamicCast(routekey);
}
#line 1940 "tars.tab.cpp"
    break;

  case 54: /* out_qualifier: TARS_OUT  */
#line 532 "tars.y"
{
    BoolGrammarPtr out = new BoolGrammar;
    out->v = true;
    yyval = GrammarBasePtr::dynamicCast(out);
}
#line 1950 "tars.tab.cpp"
    break;

  case 55: /* @7: %empty  */
#line 543 "tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);
    NamespacePtr np = NamespacePtr::dynamicCast(g_parse->currentContainer());
    if(np)
    {
         StructPtr sp = np->createStruct(ident->v);
         if(sp)
         {
             g_parse->pushContainer(sp);
             yyval = GrammarBasePtr::dynamicCast(sp);
         }
         else
         {
             yyval = 0;
         }
    }
    else
    {
       g_parse->error("struct '" + ident->v + "' must definition in namespace");
    }
}
#line 1976 "tars.tab.cpp"
    break;

  case 56: /* struct_def: struct_id @7 '{' struct_exports '}'  */
#line 565 "tars.y"
{
    if(yyvsp[-3])
    {
        g_parse->popContainer();
    }
    yyval = yyvsp[-3];

    StructPtr st = StructPtr::dynamicCast(yyval);
    assert(st);
    if(st->getAllMemberPtr().size() == 0)
    {
        // g_parse->error("struct `" + st->getSid() + "' must have at least one member");
    }
}
#line 1995 "tars.tab.cpp"
    break;

  case 57: /* struct_id: TARS_STRUCT TARS_IDENTIFIER  */
#line 585 "tars.y"
{
    yyval = yyvsp[0];
}
#line 2003 "tars.tab.cpp"
    break;

  case 58: /* struct_id: TARS_STRUCT keyword  */
#line 589 "tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);

    g_parse->error("keyword `" + ident->v + "' cannot be used as struct name");
}
#line 2013 "tars.tab.cpp"
    break;

  case 59: /* struct_id: TARS_STRUCT error  */
#line 595 "tars.y"
{
    g_parse->error("abstract declarator '<anonymous struct>' used as declaration");
}
#line 2021 "tars.tab.cpp"
    break;

  case 60: /* struct_exports: data_member ';' struct_exports  */
#line 604 "tars.y"
{

}
#line 2029 "tars.tab.cpp"
    break;

  case 61: /* struct_exports: data_member  */
#line 608 "tars.y"
{
   g_parse->error("';' missing after definition");
}
#line 2037 "tars.tab.cpp"
    break;

  case 62: /* struct_exports: %empty  */
#line 612 "tars.y"
{
}
#line 2044 "tars.tab.cpp"
    break;

  case 63: /* data_member: struct_type_id  */
#line 622 "tars.y"
{
    yyval = GrammarBasePtr::dynamicCast(yyvsp[0]);
}
#line 2052 "tars.tab.cpp"
    break;

  case 64: /* struct_type_id: TARS_CONST_INTEGER TARS_REQUIRE type_id  */
#line 631 "tars.y"
{
    StructPtr np = StructPtr::dynamicCast(g_parse->currentContainer());
    if(np)
    {
        IntergerGrammarPtr iPtr = IntergerGrammarPtr::dynamicCast(yyvsp[-2]);
        g_parse->checkTag(iPtr->v);

        TypeIdPtr tPtr  = TypeIdPtr::dynamicCast(yyvsp[0]);
        tPtr->setRequire(iPtr->v);
        np->addTypeId(tPtr);
        yyval = GrammarBasePtr::dynamicCast(yyvsp[0]);
    }
    else
    {
        yyval = 0;
    }
}
#line 2074 "tars.tab.cpp"
    break;

  case 65: /* struct_type_id: TARS_CONST_INTEGER TARS_REQUIRE type_id '=' const_initializer  */
#line 649 "tars.y"
{
    StructPtr np = StructPtr::dynamicCast(g_parse->currentContainer());
    if(np)
    {
        IntergerGrammarPtr iPtr = IntergerGrammarPtr::dynamicCast(yyvsp[-4]);
        g_parse->checkTag(iPtr->v);

        TypeIdPtr tPtr   = TypeIdPtr::dynamicCast(yyvsp[-2]);
        ConstGrammarPtr sPtr = ConstGrammarPtr::dynamicCast(yyvsp[0]);
        g_parse->checkConstValue(tPtr, sPtr->t);

        tPtr->setRequire(iPtr->v);
        tPtr->setDefault(sPtr->v);
        np->addTypeId(tPtr);
        yyval = GrammarBasePtr::dynamicCast(yyvsp[-2]);
    }
    else
    {
        yyval = 0;
    }
}
#line 2100 "tars.tab.cpp"
    break;

  case 66: /* struct_type_id: TARS_CONST_INTEGER TARS_OPTIONAL type_id '=' const_initializer  */
#line 671 "tars.y"
{
    StructPtr np = StructPtr::dynamicCast(g_parse->currentContainer());
    if(np)
    {
        IntergerGrammarPtr iPtr = IntergerGrammarPtr::dynamicCast(yyvsp[-4]);
        g_parse->checkTag(iPtr->v);

        TypeIdPtr tPtr   = TypeIdPtr::dynamicCast(yyvsp[-2]);
        ConstGrammarPtr sPtr = ConstGrammarPtr::dynamicCast(yyvsp[0]);
        g_parse->checkConstValue(tPtr, sPtr->t);

        tPtr->setOptional(iPtr->v);
        tPtr->setDefault(sPtr->v);
        np->addTypeId(tPtr);
        yyval = GrammarBasePtr::dynamicCast(yyvsp[-2]);
    }
    else
    {
        yyval = 0;
    }
}
#line 2126 "tars.tab.cpp"
    break;

  case 67: /* struct_type_id: TARS_CONST_INTEGER TARS_OPTIONAL type_id  */
#line 693 "tars.y"
{
    StructPtr np = StructPtr::dynamicCast(g_parse->currentContainer());
    if(np)
    {
        IntergerGrammarPtr iPtr = IntergerGrammarPtr::dynamicCast(yyvsp[-2]);
        g_parse->checkTag(iPtr->v);
        TypeIdPtr tPtr = TypeIdPtr::dynamicCast(yyvsp[0]);
        tPtr->setOptional(iPtr->v);
        np->addTypeId(tPtr);
        yyval = GrammarBasePtr::dynamicCast(yyvsp[0]);
    }
    else
    {
        yyval = 0;
    }
}
#line 2147 "tars.tab.cpp"
    break;

  case 68: /* struct_type_id: TARS_REQUIRE type_id  */
#line 710 "tars.y"
{
    g_parse->error("struct member need 'tag'");
}
#line 2155 "tars.tab.cpp"
    break;

  case 69: /* struct_type_id: TARS_OPTIONAL type_id  */
#line 714 "tars.y"
{
    g_parse->error("struct member need 'tag'");
}
#line 2163 "tars.tab.cpp"
    break;

  case 70: /* struct_type_id: TARS_CONST_INTEGER type_id  */
#line 718 "tars.y"
{
    g_parse->error("struct member need 'require' or 'optional'");
}
#line 2171 "tars.tab.cpp"
    break;

  case 71: /* struct_type_id: type_id  */
#line 722 "tars.y"
{
    g_parse->error("struct member need 'tag' or 'require' or 'optional'");
}
#line 2179 "tars.tab.cpp"
    break;

  case 72: /* const_initializer: TARS_CONST_INTEGER  */
#line 731 "tars.y"
{
    IntergerGrammarPtr intVal = IntergerGrammarPtr::dynamicCast(yyvsp[0]);
    ostringstream sstr;
    sstr << intVal->v;
    ConstGrammarPtr c = new ConstGrammar();
    c->t = ConstGrammar::VALUE;
    c->v = sstr.str();
    yyval = c;
}
#line 2193 "tars.tab.cpp"
    break;

  case 73: /* const_initializer: TARS_CONST_FLOAT  */
#line 741 "tars.y"
{
    FloatGrammarPtr floatVal = FloatGrammarPtr::dynamicCast(yyvsp[0]);
    ostringstream sstr;
    sstr << floatVal->v;
    ConstGrammarPtr c = new ConstGrammar();
    c->t = ConstGrammar::VALUE;
    c->v = sstr.str();
    yyval = c;
}
#line 2207 "tars.tab.cpp"
    break;

  case 74: /* const_initializer: TARS_STRING_LITERAL  */
#line 751 "tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);
    ConstGrammarPtr c = new ConstGrammar();
    c->t = ConstGrammar::STRING;
    c->v = ident->v;
    yyval = c;
}
#line 2219 "tars.tab.cpp"
    break;

  case 75: /* const_initializer: TARS_FALSE  */
#line 759 "tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);
    ConstGrammarPtr c = new ConstGrammar();
    c->t = ConstGrammar::BOOL;
    c->v = ident->v;
    yyval = c;
}
#line 2231 "tars.tab.cpp"
    break;

  case 76: /* const_initializer: TARS_TRUE  */
#line 767 "tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);
    ConstGrammarPtr c = new ConstGrammar();
    c->t = ConstGrammar::BOOL;
    c->v = ident->v;
    yyval = c;
}
#line 2243 "tars.tab.cpp"
    break;

  case 77: /* const_initializer: TARS_IDENTIFIER  */
#line 775 "tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);

    if (g_parse->checkEnum(ident->v) == false)
    {
        g_parse->error("error enum default value, not defined yet");
    }
    ConstGrammarPtr c = new ConstGrammar();
    c->t = ConstGrammar::ENUM;
    c->v = ident->v;
    yyval = c;
}
#line 2260 "tars.tab.cpp"
    break;

  case 78: /* const_initializer: scoped_name TARS_SCOPE_DELIMITER TARS_IDENTIFIER  */
#line 788 "tars.y"
{

    StringGrammarPtr scoped = StringGrammarPtr::dynamicCast(yyvsp[-2]);
    StringGrammarPtr ident  = StringGrammarPtr::dynamicCast(yyvsp[0]);
    
    if (g_parse->checkEnum(ident->v) == false)
    {
        g_parse->error("error enum default value, not defined yet");
    }
    ConstGrammarPtr c = new ConstGrammar();
    c->t = ConstGrammar::ENUM;
    c->v = scoped->v + "::" + ident->v;
    yyval = c;
}
#line 2279 "tars.tab.cpp"
    break;

  case 79: /* const_def: TARS_CONST type_id '=' const_initializer  */
#line 808 "tars.y"
{
    NamespacePtr np = NamespacePtr::dynamicCast(g_parse->currentContainer());
    if(!np)
    {
        g_parse->error("const type must define in namespace");
    }

    TypeIdPtr t   = TypeIdPtr::dynamicCast(yyvsp[-2]);
    ConstGrammarPtr c = ConstGrammarPtr::dynamicCast(yyvsp[0]);
    ConstPtr cPtr = np->createConst(t, c);
    yyval = cPtr;
}
#line 2296 "tars.tab.cpp"
    break;

  case 80: /* type_id: type TARS_IDENTIFIER  */
#line 826 "tars.y"
{
    TypePtr type = TypePtr::dynamicCast(yyvsp[-1]);
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);

    TypeIdPtr typeIdPtr = new TypeId(type, ident->v);

    yyval = GrammarBasePtr::dynamicCast(typeIdPtr);
}
#line 2309 "tars.tab.cpp"
    break;

  case 81: /* type_id: type TARS_IDENTIFIER '[' TARS_CONST_INTEGER ']'  */
#line 835 "tars.y"
{
    TypePtr type = g_parse->createVector(TypePtr::dynamicCast(yyvsp[-4]));
    IntergerGrammarPtr iPtrSize = IntergerGrammarPtr::dynamicCast(yyvsp[-1]);
    g_parse->checkArrayVaid(type,iPtrSize->v);
    type->setArray(iPtrSize->v);
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[-3]);
    TypeIdPtr typeIdPtr = new TypeId(type, ident->v);
    yyval = GrammarBasePtr::dynamicCast(typeIdPtr);
}
#line 2323 "tars.tab.cpp"
    break;

  case 82: /* type_id: type '*' TARS_IDENTIFIER  */
#line 845 "tars.y"
{
    TypePtr type = g_parse->createVector(TypePtr::dynamicCast(yyvsp[-2]));
    //IntergerGrammarPtr iPtrSize = IntergerGrammarPtr::dynamicCast($4);
    g_parse->checkPointerVaid(type);
    type->setPointer(true);
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);
    TypeIdPtr typeIdPtr = new TypeId(type, ident->v);
    yyval = GrammarBasePtr::dynamicCast(typeIdPtr);
}
#line 2337 "tars.tab.cpp"
    break;

  case 83: /* type_id: type TARS_IDENTIFIER ':' TARS_CONST_INTEGER  */
#line 855 "tars.y"
{
    TypePtr type = TypePtr::dynamicCast(yyvsp[-3]);
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[-2]);
    TypeIdPtr typeIdPtr = new TypeId(type, ident->v);
    IntergerGrammarPtr iPtrSize = IntergerGrammarPtr::dynamicCast(yyvsp[-1]);
    g_parse->checkArrayVaid(type,iPtrSize->v);
    yyval = GrammarBasePtr::dynamicCast(typeIdPtr);
}
#line 2350 "tars.tab.cpp"
    break;

  case 84: /* type_id: type keyword  */
#line 864 "tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);
    g_parse->error("keyword `" + ident->v + "' cannot be used as data member name");
}
#line 2359 "tars.tab.cpp"
    break;

  case 85: /* type_id: type  */
#line 869 "tars.y"
{
    g_parse->error("missing data member name");
}
#line 2367 "tars.tab.cpp"
    break;

  case 86: /* type_id: error  */
#line 873 "tars.y"
{
    g_parse->error("unkown type");
}
#line 2375 "tars.tab.cpp"
    break;

  case 87: /* type: type_no ':' TARS_CONST_INTEGER  */
#line 882 "tars.y"
{

    TypePtr type = TypePtr::dynamicCast(yyvsp[-2]);
    IntergerGrammarPtr iPtrSize = IntergerGrammarPtr::dynamicCast(yyvsp[0]);
    g_parse->checkArrayVaid(type,iPtrSize->v);
    type->setArray(iPtrSize->v);
    yyval = type;
}
#line 2388 "tars.tab.cpp"
    break;

  case 88: /* type: type_no  */
#line 891 "tars.y"
{
    yyval = yyvsp[0];
}
#line 2396 "tars.tab.cpp"
    break;

  case 89: /* type: type_no ':' error  */
#line 895 "tars.y"
{
   g_parse->error("array missing size");
}
#line 2404 "tars.tab.cpp"
    break;

  case 90: /* type_no: TARS_BOOL  */
#line 904 "tars.y"
{
    yyval = g_parse->createBuiltin(Builtin::KindBool);
}
#line 2412 "tars.tab.cpp"
    break;

  case 91: /* type_no: TARS_BYTE  */
#line 908 "tars.y"
{
    yyval = g_parse->createBuiltin(Builtin::KindByte);
}
#line 2420 "tars.tab.cpp"
    break;

  case 92: /* type_no: TARS_BYTES  */
#line 912 "tars.y"
{
    yyval = g_parse->createBuiltin(Builtin::KindBytes);
}
#line 2428 "tars.tab.cpp"
    break;

  case 93: /* type_no: TARS_UNSIGNED TARS_BYTE  */
#line 916 "tars.y"
{
    yyval = g_parse->createBuiltin(Builtin::KindByte,true);
}
#line 2436 "tars.tab.cpp"
    break;

  case 94: /* type_no: TARS_SHORT  */
#line 920 "tars.y"
{
    yyval = g_parse->createBuiltin(Builtin::KindShort);
}
#line 2444 "tars.tab.cpp"
    break;

  case 95: /* type_no: TARS_UNSIGNED TARS_SHORT  */
#line 924 "tars.y"
{
    yyval = g_parse->createBuiltin(Builtin::KindShort,true);
}
#line 2452 "tars.tab.cpp"
    break;

  case 96: /* type_no: TARS_INT  */
#line 928 "tars.y"
{
    yyval = g_parse->createBuiltin(Builtin::KindInt);
}
#line 2460 "tars.tab.cpp"
    break;

  case 97: /* type_no: TARS_UNSIGNED TARS_INT  */
#line 932 "tars.y"
{
    yyval = g_parse->createBuiltin(Builtin::KindInt,true);
}
#line 2468 "tars.tab.cpp"
    break;

  case 98: /* type_no: TARS_LONG  */
#line 936 "tars.y"
{
    yyval = g_parse->createBuiltin(Builtin::KindLong);
}
#line 2476 "tars.tab.cpp"
    break;

  case 99: /* type_no: TARS_UNSIGNED TARS_LONG  */
#line 940 "tars.y"
{
    yyval = g_parse->createBuiltin(Builtin::KindLong,true);
}
#line 2484 "tars.tab.cpp"
    break;

  case 100: /* type_no: TARS_FLOAT  */
#line 944 "tars.y"
{
    yyval = g_parse->createBuiltin(Builtin::KindFloat);
}
#line 2492 "tars.tab.cpp"
    break;

  case 101: /* type_no: TARS_DOUBLE  */
#line 948 "tars.y"
{
    yyval = g_parse->createBuiltin(Builtin::KindDouble);
}
#line 2500 "tars.tab.cpp"
    break;

  case 102: /* type_no: TARS_STRING  */
#line 952 "tars.y"
{
    yyval = g_parse->createBuiltin(Builtin::KindString);
}
#line 2508 "tars.tab.cpp"
    break;

  case 103: /* type_no: vector  */
#line 956 "tars.y"
{
   yyval = GrammarBasePtr::dynamicCast(yyvsp[0]);
}
#line 2516 "tars.tab.cpp"
    break;

  case 104: /* type_no: map  */
#line 960 "tars.y"
{
   yyval = GrammarBasePtr::dynamicCast(yyvsp[0]);
}
#line 2524 "tars.tab.cpp"
    break;

  case 105: /* type_no: scoped_name  */
#line 964 "tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);
    TypePtr sp = g_parse->findUserType(ident->v);
    if(sp)
    {
        yyval = GrammarBasePtr::dynamicCast(sp);
    }
    else
    {
        g_parse->error("'" + ident->v + "' undefined!");
    }
}
#line 2541 "tars.tab.cpp"
    break;

  case 106: /* vector: TARS_VECTOR '<' type '>'  */
#line 982 "tars.y"
{
   yyval = GrammarBasePtr::dynamicCast(g_parse->createVector(TypePtr::dynamicCast(yyvsp[-1])));
}
#line 2549 "tars.tab.cpp"
    break;

  case 107: /* vector: TARS_VECTOR '<' error  */
#line 986 "tars.y"
{
   g_parse->error("vector error");
}
#line 2557 "tars.tab.cpp"
    break;

  case 108: /* vector: TARS_VECTOR '<' type error  */
#line 990 "tars.y"
{
   g_parse->error("vector missing '>'");
}
#line 2565 "tars.tab.cpp"
    break;

  case 109: /* vector: TARS_VECTOR error  */
#line 994 "tars.y"
{
   g_parse->error("vector missing type");
}
#line 2573 "tars.tab.cpp"
    break;

  case 110: /* map: TARS_MAP '<' type ',' type '>'  */
#line 1003 "tars.y"
{
   yyval = GrammarBasePtr::dynamicCast(g_parse->createMap(TypePtr::dynamicCast(yyvsp[-3]), TypePtr::dynamicCast(yyvsp[-1])));
}
#line 2581 "tars.tab.cpp"
    break;

  case 111: /* map: TARS_MAP '<' error  */
#line 1007 "tars.y"
{
   g_parse->error("map error");
}
#line 2589 "tars.tab.cpp"
    break;

  case 112: /* scoped_name: TARS_IDENTIFIER  */
#line 1016 "tars.y"
{
}
#line 2596 "tars.tab.cpp"
    break;

  case 113: /* scoped_name: TARS_SCOPE_DELIMITER TARS_IDENTIFIER  */
#line 1019 "tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);
    ident->v = "::" + ident->v;
    yyval = GrammarBasePtr::dynamicCast(ident);
}
#line 2606 "tars.tab.cpp"
    break;

  case 114: /* scoped_name: scoped_name TARS_SCOPE_DELIMITER TARS_IDENTIFIER  */
#line 1025 "tars.y"
{
    StringGrammarPtr scoped = StringGrammarPtr::dynamicCast(yyvsp[-2]);
    StringGrammarPtr ident  = StringGrammarPtr::dynamicCast(yyvsp[0]);
    scoped->v += "::";
    scoped->v += ident->v;
    yyval = GrammarBasePtr::dynamicCast(scoped);
}
#line 2618 "tars.tab.cpp"
    break;

  case 115: /* keyword: TARS_STRUCT  */
#line 1038 "tars.y"
{
}
#line 2625 "tars.tab.cpp"
    break;

  case 116: /* keyword: TARS_VOID  */
#line 1041 "tars.y"
{
}
#line 2632 "tars.tab.cpp"
    break;

  case 117: /* keyword: TARS_BOOL  */
#line 1044 "tars.y"
{
}
#line 2639 "tars.tab.cpp"
    break;

  case 118: /* keyword: TARS_BYTE  */
#line 1047 "tars.y"
{
}
#line 2646 "tars.tab.cpp"
    break;

  case 119: /* keyword: TARS_BYTES  */
#line 1050 "tars.y"
{
}
#line 2653 "tars.tab.cpp"
    break;

  case 120: /* keyword: TARS_SHORT  */
#line 1053 "tars.y"
{
}
#line 2660 "tars.tab.cpp"
    break;

  case 121: /* keyword: TARS_INT  */
#line 1056 "tars.y"
{
}
#line 2667 "tars.tab.cpp"
    break;

  case 122: /* keyword: TARS_FLOAT  */
#line 1059 "tars.y"
{
}
#line 2674 "tars.tab.cpp"
    break;

  case 123: /* keyword: TARS_DOUBLE  */
#line 1062 "tars.y"
{
}
#line 2681 "tars.tab.cpp"
    break;

  case 124: /* keyword: TARS_STRING  */
#line 1065 "tars.y"
{
}
#line 2688 "tars.tab.cpp"
    break;

  case 125: /* keyword: TARS_VECTOR  */
#line 1068 "tars.y"
{
}
#line 2695 "tars.tab.cpp"
    break;

  case 126: /* keyword: TARS_KEY  */
#line 1071 "tars.y"
{
}
#line 2702 "tars.tab.cpp"
    break;

  case 127: /* keyword: TARS_MAP  */
#line 1074 "tars.y"
{
}
#line 2709 "tars.tab.cpp"
    break;

  case 128: /* keyword: TARS_NAMESPACE  */
#line 1077 "tars.y"
{
}
#line 2716 "tars.tab.cpp"
    break;

  case 129: /* keyword: TARS_INTERFACE  */
#line 1080 "tars.y"
{
}
#line 2723 "tars.tab.cpp"
    break;

  case 130: /* keyword: TARS_OUT  */
#line 1083 "tars.y"
{
}
#line 2730 "tars.tab.cpp"
    break;

  case 131: /* keyword: TARS_REQUIRE  */
#line 1086 "tars.y"
{
}
#line 2737 "tars.tab.cpp"
    break;

  case 132: /* keyword: TARS_OPTIONAL  */
#line 1089 "tars.y"
{
}
#line 2744 "tars.tab.cpp"
    break;

  case 133: /* keyword: TARS_CONST_INTEGER  */
#line 1092 "tars.y"
{
}
#line 2751 "tars.tab.cpp"
    break;

  case 134: /* keyword: TARS_CONST_FLOAT  */
#line 1095 "tars.y"
{
}
#line 2758 "tars.tab.cpp"
    break;

  case 135: /* keyword: TARS_FALSE  */
#line 1098 "tars.y"
{
}
#line 2765 "tars.tab.cpp"
    break;

  case 136: /* keyword: TARS_TRUE  */
#line 1101 "tars.y"
{
}
#line 2772 "tars.tab.cpp"
    break;

  case 137: /* keyword: TARS_STRING_LITERAL  */
#line 1104 "tars.y"
{
}
#line 2779 "tars.tab.cpp"
    break;

  case 138: /* keyword: TARS_CONST  */
#line 1107 "tars.y"
{
}
#line 2786 "tars.tab.cpp"
    break;

  case 139: /* keyword: TARS_ENUM  */
#line 1110 "tars.y"
{
}
#line 2793 "tars.tab.cpp"
    break;

  case 140: /* keyword: TARS_UNSIGNED  */
#line 1113 "tars.y"
{
}
#line 2800 "tars.tab.cpp"
    break;


#line 2804 "tars.tab.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1117 "tars.y"



