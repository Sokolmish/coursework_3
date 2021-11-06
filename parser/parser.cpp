/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 9 "parser/parser.y"

	#include "common.h"
	#include "ast.hpp"

	#ifdef __cplusplus
	extern "C" {
	#endif

	int yylex(void*, void*, yyscan_t);

	void yyerror(void*, yyscan_t, AST_TranslationUnit**, const char *str) {
		fprintf(stderr, "error: %s\n",str);
	}

	#ifdef __cplusplus
	}
	#endif

#line 89 "parser/parser.cpp"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSER_Y_TAB_H_INCLUDED
# define YY_YY_PARSER_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PTR_OP = 258,
    INC_OP = 259,
    DEC_OP = 260,
    LEFT_OP = 261,
    RIGHT_OP = 262,
    LE_OP = 263,
    GE_OP = 264,
    EQ_OP = 265,
    NE_OP = 266,
    AND_OP = 267,
    OR_OP = 268,
    MUL_ASSIGN = 269,
    DIV_ASSIGN = 270,
    MOD_ASSIGN = 271,
    ADD_ASSIGN = 272,
    SUB_ASSIGN = 273,
    LEFT_ASSIGN = 274,
    RIGHT_ASSIGN = 275,
    AND_ASSIGN = 276,
    XOR_ASSIGN = 277,
    OR_ASSIGN = 278,
    SIZEOF = 279,
    TYPEDEF = 280,
    EXTERN = 281,
    STATIC = 282,
    AUTO = 283,
    REGISTER = 284,
    INLINE = 285,
    RESTRICT = 286,
    CHAR = 287,
    SHORT = 288,
    INT = 289,
    LONG = 290,
    SIGNED = 291,
    UNSIGNED = 292,
    FLOAT = 293,
    DOUBLE = 294,
    CONST = 295,
    VOLATILE = 296,
    VOID = 297,
    STRUCT = 298,
    UNION = 299,
    ENUM = 300,
    ELLIPSIS = 301,
    CASE = 302,
    DEFAULT = 303,
    IF = 304,
    SWITCH = 305,
    WHILE = 306,
    DO = 307,
    FOR = 308,
    GOTO = 309,
    CONTINUE = 310,
    BREAK = 311,
    RETURN = 312,
    IFX = 313,
    ELSE = 314,
    IDENTIFIER = 315,
    TYPE_NAME = 316,
    CONSTANT = 317,
    STRING_LITERAL = 318
  };
#endif
/* Tokens.  */
#define PTR_OP 258
#define INC_OP 259
#define DEC_OP 260
#define LEFT_OP 261
#define RIGHT_OP 262
#define LE_OP 263
#define GE_OP 264
#define EQ_OP 265
#define NE_OP 266
#define AND_OP 267
#define OR_OP 268
#define MUL_ASSIGN 269
#define DIV_ASSIGN 270
#define MOD_ASSIGN 271
#define ADD_ASSIGN 272
#define SUB_ASSIGN 273
#define LEFT_ASSIGN 274
#define RIGHT_ASSIGN 275
#define AND_ASSIGN 276
#define XOR_ASSIGN 277
#define OR_ASSIGN 278
#define SIZEOF 279
#define TYPEDEF 280
#define EXTERN 281
#define STATIC 282
#define AUTO 283
#define REGISTER 284
#define INLINE 285
#define RESTRICT 286
#define CHAR 287
#define SHORT 288
#define INT 289
#define LONG 290
#define SIGNED 291
#define UNSIGNED 292
#define FLOAT 293
#define DOUBLE 294
#define CONST 295
#define VOLATILE 296
#define VOID 297
#define STRUCT 298
#define UNION 299
#define ENUM 300
#define ELLIPSIS 301
#define CASE 302
#define DEFAULT 303
#define IF 304
#define SWITCH 305
#define WHILE 306
#define DO 307
#define FOR 308
#define GOTO 309
#define CONTINUE 310
#define BREAK 311
#define RETURN 312
#define IFX 313
#define ELSE 314
#define IDENTIFIER 315
#define TYPE_NAME 316
#define CONSTANT 317
#define STRING_LITERAL 318

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 44 "parser/parser.y"

	int boolean;
	int enum_val;
	uint64_t u64;
	const char *str;
	ident_id_t ident_id;

	struct AST_Expr *expr;

	struct AST_ArgumentsList *args_list;
	struct AST_DeclSpecifiers *decl_specifiers;
	struct AST_TypeSpecifier *type_specifier;
	struct AST_StructDeclarationList *struct_decl_lst;
	struct AST_StructDeclaration *struct_decl;
	struct AST_SpecifierQualifierList *spec_qual_lst;
	struct AST_StructDeclarator *struct_delarator;
	struct AST_StructDeclaratorList *struct_delarator_lst;
	struct AST_StructOrUsionSpec *struct_or_union_spec;
	struct AST_Enumerator *enumerator;
	struct AST_EnumeratorList *enumerator_lst;
	struct AST_EnumSpecifier *enum_spec;

	struct AST_InitDeclarator *init_declarator;
	struct AST_InitDeclaratorList *init_declarator_lst;
	struct AST_Declaration *declaration;
	struct AST_DirectDeclarator *dir_declarator;
	struct AST_Pointer *pointer;
	struct AST_Declarator *declarator;
	struct AST_ParameterDeclaration *param_declaration;
	struct AST_ParameterTypeList *param_type_lst;
	struct AST_ParameterList *param_lst;
	struct AST_TypeName *type_name;
	struct AST_DirectAbstractDeclarator *dir_abstract_decl;
	struct AST_AbstractDeclarator *abstract_decl;
	struct AST_TypeQualifiers *type_quals;

	struct AST_Designator *designator;
	struct AST_InitializerList *initializer_lst;
	struct AST_Initializer *initializer;

	struct AST_Statement *stmt;
	struct AST_LabeledStmt *label_stmt;
	struct AST_BlockItemList *block_item_lst;
	struct AST_CompoundStmt *compound_stmt;
	struct AST_ExprStmt *expr_stmt;
	struct AST_SelectionStmt *select_stmt;
	struct AST_IterationStmt *iter_stmt;
	struct AST_JumpStmt *jump_stmt;

	struct AST_FunctionDef *func_def;
	struct AST_TranslationUnit *trans_unit;

#line 320 "parser/parser.cpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int yyparse (yyscan_t scanner, struct AST_TranslationUnit **parser_result);

#endif /* !YY_YY_PARSER_Y_TAB_H_INCLUDED  */



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
typedef yytype_int16 yy_state_t;

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  51
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1284

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  218
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  364

#define YYUNDEFTOK  2
#define YYMAXUTOK   318


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    75,     2,     2,     2,    77,    70,     2,
      64,    65,    71,    72,    69,    73,    68,    76,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    83,    87,
      78,    84,    79,    82,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    66,     2,    67,    80,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    85,    81,    86,    74,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   175,   175,   176,   177,   178,   182,   183,   184,   185,
     186,   187,   188,   189,   193,   194,   198,   199,   200,   201,
     202,   203,   207,   208,   209,   210,   211,   212,   216,   217,
     221,   222,   223,   224,   228,   229,   230,   234,   235,   236,
     240,   241,   242,   243,   244,   248,   249,   250,   254,   255,
     259,   260,   264,   265,   269,   270,   274,   275,   279,   280,
     284,   285,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   303,   304,   308,   314,   315,   316,   317,
     318,   319,   320,   321,   325,   326,   327,   328,   329,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   348,   349,   350,   354,   358,   359,   360,   364,   365,
     369,   370,   374,   378,   379,   380,   381,   385,   386,   390,
     391,   392,   396,   397,   398,   399,   400,   404,   405,   409,
     410,   417,   418,   422,   423,   427,   428,   432,   433,   437,
     438,   439,   440,   444,   445,   446,   447,   448,   449,   450,
     451,   455,   456,   460,   461,   465,   466,   470,   471,   472,
     476,   477,   481,   482,   483,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   502,   503,   504,   508,   509,   510,
     511,   515,   516,   523,   524,   525,   526,   527,   528,   532,
     533,   534,   538,   539,   543,   544,   545,   546,   550,   551,
     555,   556,   557,   561,   562,   563,   564,   565,   566,   570,
     571,   572,   573,   574,   581,   582,   583,   584,   588
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "SIZEOF", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "INLINE",
  "RESTRICT", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "STRUCT", "UNION",
  "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "SWITCH", "WHILE", "DO",
  "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "IFX", "ELSE",
  "IDENTIFIER", "TYPE_NAME", "CONSTANT", "STRING_LITERAL", "'('", "')'",
  "'['", "']'", "'.'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'",
  "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "'{'",
  "'}'", "';'", "$accept", "primary_expr", "postfix_expr", "arg_expr_lst",
  "unary_expr", "unary_operator", "cast_expr", "mult_expr", "add_expr",
  "shift_expr", "rel_expr", "eq_expr", "and_expr", "xor_expr", "or_expr",
  "log_and_expr", "log_or_expr", "ternary_expr", "assign_expr",
  "assign_op", "expr", "const_expr", "decl_specs",
  "storage_class_specifier", "type_specifier", "type_qualifier",
  "function_specifier", "unistruct_spec", "unistruct",
  "struct_declaration_list", "struct_declaration", "spec_qual_lst",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list", "enumerator", "declaration", "init_declarator_list",
  "init_declarator", "declarator", "pointer", "dir_declarator",
  "type_qual_lst", "param_type_lst", "param_lst", "parameter_declaration",
  "type_name", "abstr_declarator", "dir_abstr_declarator", "initializer",
  "init_lst", "designator", "stmt", "label_stmt", "compound_stmt",
  "block_item_list", "expr_stmt", "select_stmt", "loop_stmt", "jmp_stmt",
  "translation_unit", "func_def", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,    40,    41,    91,    93,    46,    44,
      38,    42,    43,    45,   126,    33,    47,    37,    60,    62,
      94,   124,    63,    58,    61,   123,   125,    59
};
# endif

#define YYPACT_NINF (-210)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1208,  -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,
    -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,
    -210,   -37,  -210,   -13,  1208,  1208,  1208,  1208,  -210,    -6,
    -210,  -210,   912,  -210,   -68,   -28,  -210,    58,     4,  -210,
     -31,  -210,   -16,    -1,    99,  -210,  -210,  -210,  -210,   -46,
    1223,  -210,  -210,  -210,   -28,     9,   -50,  -210,    -3,  -210,
    -210,     4,    58,  -210,   599,   288,  -210,    99,  1089,   234,
    1223,  1223,  1223,   927,  -210,    32,    28,   827,   -36,  -210,
    -210,  -210,  -210,  -210,    14,   844,   844,   861,  -210,  -210,
    -210,   661,  -210,  -210,  -210,  -210,  -210,  -210,   573,  -210,
     364,   263,   827,  -210,   -11,   133,   124,    22,   243,    50,
      45,    75,   156,    -5,  -210,  -210,  -210,   827,    91,   131,
     173,   176,   458,   187,   160,   170,   177,   492,   164,  -210,
    -210,  -210,    -2,   -13,  -210,  -210,  -210,  -210,   352,  -210,
    -210,  -210,  -210,  -210,   116,   198,   197,  -210,  -210,   206,
     686,   958,  -210,  -210,  -210,  -210,   827,    21,  -210,   204,
     -33,  -210,  -210,  -210,  -210,  -210,  -210,   827,  -210,  -210,
     661,  -210,   114,   125,   223,   827,   229,  -210,    84,   211,
     239,  -210,  -210,   704,   827,   240,  -210,  -210,  -210,  -210,
    -210,  -210,  -210,  -210,  -210,  -210,  -210,   827,  -210,   827,
     827,   827,   827,   827,   827,   827,   827,   827,   827,   827,
     827,   827,   827,   827,   827,   827,   827,   827,   219,   458,
     827,   827,   827,   252,   416,   224,  -210,  -210,  -210,    36,
     458,   827,  -210,  -210,  -210,  -210,   995,   738,  -210,   100,
    -210,   166,  -210,  1171,  -210,  -210,   267,  -210,  -210,    32,
    -210,   827,  -210,   281,  -210,  1042,   169,  -210,   827,   286,
    -210,   546,  -210,   599,  -210,  -210,   123,  -210,   183,  -210,
    -210,  -210,  -210,  -210,   -11,   -11,   133,   133,   124,   124,
     124,   124,    22,    22,   243,    50,    45,    75,   156,    26,
     458,  -210,   129,   138,   139,   290,   520,   520,  -210,  -210,
    -210,  -210,  -210,   299,   300,  -210,   303,   166,  1130,   766,
    -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,
     271,  -210,  -210,   827,  -210,   827,  -210,   458,   458,   458,
     827,   782,   799,  -210,  -210,  -210,  -210,   301,  -210,   304,
     599,  -210,  -210,   313,  -210,  -210,   152,   458,   153,   458,
     154,  -210,  -210,  -210,   458,   311,  -210,   458,  -210,   458,
    -210,  -210,  -210,  -210
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    84,    85,    86,    87,    88,   104,   102,    90,    91,
      92,    93,    96,    97,    94,    95,   101,   103,    89,   108,
     109,     0,   100,     0,    76,    78,    80,    82,    98,     0,
      99,   215,     0,   214,   126,     0,   143,     0,   139,   131,
       0,   133,   135,     0,   138,    77,    79,    81,    83,   107,
       0,     1,   217,   216,     0,   129,     0,   127,     0,   151,
     141,   140,     0,   132,     0,     0,   218,   137,     0,     0,
       0,   114,   116,     0,   110,     0,     0,     0,     0,   122,
     144,   152,   142,   134,   135,     0,     0,     0,     2,     3,
       4,     0,    22,    23,    24,    25,    26,    27,     0,     6,
      16,    28,     0,    30,    34,    37,    40,    45,    48,    50,
      52,    54,    56,    58,    60,   174,   136,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,   192,
     198,    73,     0,     0,   194,   195,   183,   184,     0,   185,
     186,   187,   188,   150,   159,     0,   153,   155,   148,     0,
       0,     0,   113,   115,   106,   111,     0,     0,   117,   119,
       0,   123,    28,    75,   130,   124,   128,     0,    17,    18,
       0,    20,     0,   160,     0,     0,     0,   177,     0,     0,
       0,    12,    13,     0,     0,     0,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    62,     0,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   210,   211,   212,     0,
       0,     0,   199,   193,   196,   197,     0,     0,   157,   162,
     158,   163,   149,     0,   147,   146,     0,   105,   120,     0,
     112,     0,   125,     0,     5,     0,   162,   161,     0,     0,
     182,     0,   175,     0,    11,     8,     0,    14,     0,    10,
      61,    31,    32,    33,    35,    36,    38,    39,    43,    44,
      41,    42,    46,    47,    49,    51,    53,    55,    57,     0,
       0,   191,     0,     0,     0,     0,     0,     0,   209,   213,
     189,    74,   170,     0,     0,   166,     0,   164,     0,     0,
     154,   156,   145,   118,   121,    21,    29,   181,   176,   179,
       0,   178,     9,     0,     7,     0,   190,     0,     0,     0,
       0,     0,     0,   171,   165,   167,   172,     0,   168,     0,
       0,    15,    59,   200,   202,   203,     0,     0,     0,     0,
       0,   173,   169,   180,     0,     0,   207,     0,   205,     0,
     201,   204,   208,   206
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -210,  -210,  -210,  -210,   -65,  -210,   -73,    53,    57,    19,
      61,   199,   205,   196,   202,   203,  -210,   -76,   -64,  -210,
     -63,   -99,    46,  -210,    11,   140,  -210,  -210,  -210,   359,
     -57,   -58,  -210,   182,  -210,   379,   -71,   -22,  -210,   372,
     -20,   -12,   -39,   366,   -66,  -210,   193,   294,  -133,   -84,
     -92,  -210,   207,  -113,  -210,   423,  -210,  -209,  -210,  -210,
    -210,  -210,   434
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    99,   100,   266,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   131,   197,
     132,   164,   144,    24,    25,    26,    27,    28,    29,    73,
      74,    75,   157,   158,    30,    56,    57,    31,    40,    41,
      58,    43,    44,    61,   303,   146,   147,   174,   304,   241,
     116,   178,   179,   135,   136,   137,   138,   139,   140,   141,
     142,    32,    33
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     115,   163,   145,    42,    67,   149,   177,   166,   216,   223,
      52,   240,   162,   152,   153,   297,   155,    54,   218,    78,
     168,   169,   171,    34,    55,   235,    60,    55,   172,   198,
     206,   207,    55,   173,   115,     7,    79,   162,    62,    70,
     257,   163,    84,   134,    16,    17,    23,    36,    35,    82,
     165,    37,   162,   252,    49,   159,    63,   248,    38,    36,
     199,    71,    80,    37,   229,   200,   201,   231,    64,    65,
      45,    46,    47,    48,    39,    38,   259,   217,    23,    50,
     163,    71,    71,    71,    71,   232,   246,   331,   332,   166,
     249,   162,    36,    77,   155,   231,    37,   160,    64,   163,
     208,   209,    71,    38,   172,   231,   291,   172,   250,   325,
     162,   133,   173,    84,   161,   156,   234,   300,    36,   267,
     212,   268,    37,   299,   238,   213,   271,   272,   273,    38,
     204,   205,   239,   270,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   314,   261,   289,   307,   214,   292,   293,   294,
      36,   256,    71,    68,   236,    69,   237,   301,   215,   319,
     262,   321,   307,   306,   219,   163,    36,   326,    59,   254,
     236,    71,   237,   231,   133,   316,   162,    38,   322,   255,
      72,   237,   323,   162,   327,   220,    38,   115,   231,   115,
      67,    81,   296,   328,   329,   202,   203,   231,   231,    59,
      72,    72,    72,    72,   343,   344,   345,   355,   357,   359,
     225,   231,   231,   231,   239,   278,   279,   280,   281,   159,
     308,    72,   309,   255,   356,   237,   358,   221,    85,    86,
     222,   360,   337,   256,   362,   339,   363,   230,   353,   342,
     324,   224,   231,   210,   211,   274,   275,   226,    87,   341,
     162,   276,   277,   242,   227,     7,   243,   346,   348,   350,
     133,   282,   283,   244,    16,    17,   115,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   251,   258,   260,
      81,    72,    85,    86,    88,   263,    89,    90,    91,   264,
     269,   148,   290,   295,    92,    93,    94,    95,    96,    97,
      72,   298,    87,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,   312,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   315,   196,   128,    22,
      89,    90,    91,   317,   330,   340,    85,    86,    92,    93,
      94,    95,    96,    97,   333,   334,   351,   180,   181,   182,
     335,   352,   354,    65,   129,   130,    87,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,   361,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     286,   284,   128,    22,    89,    90,    91,   287,   285,   288,
      85,    86,    92,    93,    94,    95,    96,    97,   183,   151,
     184,   313,   185,    76,    83,   150,   311,    65,   233,   130,
      87,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    85,    86,   253,    66,    53,     0,   320,     0,
       0,     0,     0,     0,     0,     0,    88,    22,    89,    90,
      91,     0,    87,     0,     0,     0,    92,    93,    94,    95,
      96,    97,     0,     0,     0,     0,    85,    86,     0,     0,
       0,     0,     0,   130,     0,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,    87,     0,   128,     0,
      89,    90,    91,     0,    85,    86,     0,     0,    92,    93,
      94,    95,    96,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    87,   130,     0,     0,     0,     0,
      85,    86,    88,     0,    89,    90,    91,     0,     0,     0,
       0,     0,    92,    93,    94,    95,    96,    97,     0,     0,
      87,     0,     0,     0,     0,     0,     0,    85,    86,   228,
      88,     0,    89,    90,    91,     0,     0,     0,     0,     0,
      92,    93,    94,    95,    96,    97,     0,    87,     0,     0,
       0,     0,     0,    85,    86,     0,    88,   130,    89,    90,
      91,     0,   175,     0,   176,     0,    92,    93,    94,    95,
      96,    97,     0,    87,     0,     0,     0,     0,     0,     0,
       0,    98,   318,    88,     0,    89,    90,    91,     0,   175,
       0,   176,     0,    92,    93,    94,    95,    96,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,    88,
       0,    89,    90,    91,     0,    85,    86,     0,     0,    92,
      93,    94,    95,    96,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,    87,     0,     0,     0,     0,
      85,    86,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,    85,    86,
      87,     0,     0,     0,     0,     0,     0,     7,     0,     0,
       0,    88,    22,    89,    90,    91,    16,    17,    87,     0,
       0,    92,    93,    94,    95,    96,    97,     0,     0,     0,
       0,     0,    85,    86,     0,     0,    88,     0,    89,    90,
      91,     0,     0,   245,     0,     0,    92,    93,    94,    95,
      96,    97,    87,     0,    88,     0,    89,    90,    91,   265,
      85,    86,     0,     0,    92,    93,    94,    95,    96,    97,
       0,     0,     0,     0,     0,     0,    85,    86,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,    88,     0,
      89,    90,    91,    85,    86,   305,    87,     0,    92,    93,
      94,    95,    96,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,    88,     0,    89,    90,
      91,    85,    86,   338,     0,     0,    92,    93,    94,    95,
      96,    97,    88,     0,    89,    90,    91,   347,    85,    86,
       0,    87,    92,    93,    94,    95,    96,    97,     0,    88,
       0,    89,    90,    91,   349,    85,    86,     0,    87,    92,
      93,    94,    95,    96,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,    88,     0,    89,
      90,    91,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,    97,     0,    88,     0,    89,    90,   167,     0,
       0,     0,    51,     0,    92,    93,    94,    95,    96,    97,
       0,    88,     0,    89,    90,   170,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,    97,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   154,     0,     0,     0,     0,     0,    22,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,   247,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    36,    22,     0,     0,   236,
     302,   237,     0,     0,     0,     0,    38,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,     0,     0,   255,   302,   237,     0,
       0,     0,     0,    38,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,     0,     0,     0,   143,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    22,     0,     0,     0,   336,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,   310,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22
};

static const yytype_int16 yycheck[] =
{
      64,    77,    68,    23,    43,    69,    98,    78,    13,   122,
      32,   144,    77,    71,    72,   224,    73,    85,   117,    69,
      85,    86,    87,    60,    60,   138,    38,    60,    91,   102,
       8,     9,    60,    91,    98,    31,    86,   102,    69,    85,
     173,   117,    62,    65,    40,    41,     0,    60,    85,    61,
      86,    64,   117,    86,    60,    75,    87,   156,    71,    60,
      71,    50,    65,    64,   127,    76,    77,    69,    84,    85,
      24,    25,    26,    27,    87,    71,   175,    82,    32,    85,
     156,    70,    71,    72,    73,    87,   150,   296,   297,   160,
      69,   156,    60,    84,   151,    69,    64,    69,    84,   175,
      78,    79,    91,    71,   167,    69,   219,   170,    87,    83,
     175,    65,   170,   133,    86,    83,   138,   230,    60,   183,
      70,   184,    64,    87,   144,    80,   199,   200,   201,    71,
       6,     7,   144,   197,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   251,    69,   217,   239,    81,   220,   221,   222,
      60,   173,   151,    64,    64,    66,    66,   231,    12,   261,
      86,   263,   256,   237,    83,   251,    60,   290,    38,    65,
      64,   170,    66,    69,   138,   258,   251,    71,    65,    64,
      50,    66,    69,   258,    65,    64,    71,   261,    69,   263,
     239,    61,   224,    65,    65,    72,    73,    69,    69,    69,
      70,    71,    72,    73,   327,   328,   329,    65,    65,    65,
      60,    69,    69,    69,   236,   206,   207,   208,   209,   249,
      64,    91,    66,    64,   347,    66,   349,    64,     4,     5,
      64,   354,   308,   255,   357,   309,   359,    83,   340,   325,
      67,    64,    69,    10,    11,   202,   203,    87,    24,   323,
     325,   204,   205,    65,    87,    31,    69,   330,   331,   332,
     224,   210,   211,    67,    40,    41,   340,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    83,    65,    60,
     150,   151,     4,     5,    60,    84,    62,    63,    64,    60,
      60,    67,    83,    51,    70,    71,    72,    73,    74,    75,
     170,    87,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    67,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    65,    84,    60,    61,
      62,    63,    64,    67,    64,    84,     4,     5,    70,    71,
      72,    73,    74,    75,    65,    65,    65,     3,     4,     5,
      67,    67,    59,    85,    86,    87,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    87,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
     214,   212,    60,    61,    62,    63,    64,   215,   213,   216,
       4,     5,    70,    71,    72,    73,    74,    75,    64,    70,
      66,   249,    68,    54,    62,    69,   243,    85,    86,    87,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,     4,     5,   170,    42,    32,    -1,   261,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    -1,    24,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    75,    -1,    -1,    -1,    -1,     4,     5,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    24,    -1,    60,    -1,
      62,    63,    64,    -1,     4,     5,    -1,    -1,    70,    71,
      72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    24,    87,    -1,    -1,    -1,    -1,
       4,     5,    60,    -1,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    75,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,    87,
      60,    -1,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    74,    75,    -1,    24,    -1,    -1,
      -1,    -1,    -1,     4,     5,    -1,    60,    87,    62,    63,
      64,    -1,    66,    -1,    68,    -1,    70,    71,    72,    73,
      74,    75,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    60,    -1,    62,    63,    64,    -1,    66,
      -1,    68,    -1,    70,    71,    72,    73,    74,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    60,
      -1,    62,    63,    64,    -1,     4,     5,    -1,    -1,    70,
      71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    24,    -1,    -1,    -1,    -1,
       4,     5,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,     4,     5,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    40,    41,    24,    -1,
      -1,    70,    71,    72,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,     4,     5,    -1,    -1,    60,    -1,    62,    63,
      64,    -1,    -1,    67,    -1,    -1,    70,    71,    72,    73,
      74,    75,    24,    -1,    60,    -1,    62,    63,    64,    65,
       4,     5,    -1,    -1,    70,    71,    72,    73,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,     4,     5,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      62,    63,    64,     4,     5,    67,    24,    -1,    70,    71,
      72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    60,    -1,    62,    63,
      64,     4,     5,    67,    -1,    -1,    70,    71,    72,    73,
      74,    75,    60,    -1,    62,    63,    64,    65,     4,     5,
      -1,    24,    70,    71,    72,    73,    74,    75,    -1,    60,
      -1,    62,    63,    64,    65,     4,     5,    -1,    24,    70,
      71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    60,    -1,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    74,    75,    -1,    60,    -1,    62,    63,    64,    -1,
      -1,    -1,     0,    -1,    70,    71,    72,    73,    74,    75,
      -1,    60,    -1,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    75,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    61,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,    -1,    -1,    64,
      65,    66,    -1,    -1,    -1,    -1,    71,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    64,    65,    66,    -1,
      -1,    -1,    -1,    71,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    65,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    65,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    61,   110,   111,   112,   113,   114,   115,   116,
     122,   125,   149,   150,    60,    85,    60,    64,    71,    87,
     126,   127,   128,   129,   130,   110,   110,   110,   110,    60,
      85,     0,   125,   150,    85,    60,   123,   124,   128,   113,
     129,   131,    69,    87,    84,    85,   143,   130,    64,    66,
      85,   112,   113,   117,   118,   119,   123,    84,    69,    86,
      65,   113,   129,   127,   128,     4,     5,    24,    60,    62,
      63,    64,    70,    71,    72,    73,    74,    75,    85,    89,
      90,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   138,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    60,    86,
      87,   106,   108,   110,   125,   141,   142,   143,   144,   145,
     146,   147,   148,    65,   110,   132,   133,   134,    67,   106,
     131,   117,   119,   119,    86,   118,    83,   120,   121,   128,
      69,    86,    92,   105,   109,    86,   124,    64,    92,    92,
      64,    92,   108,   119,   135,    66,    68,   138,   139,   140,
       3,     4,     5,    64,    66,    68,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    84,   107,    94,    71,
      76,    77,    72,    73,     6,     7,     8,     9,    78,    79,
      10,    11,    70,    80,    81,    12,    13,    82,   109,    83,
      64,    64,    64,   141,    64,    60,    87,    87,    87,   108,
      83,    69,    87,    86,   125,   141,    64,    66,   128,   129,
     136,   137,    65,    69,    67,    67,   106,    86,   109,    69,
      87,    83,    86,   135,    65,    64,   129,   136,    65,   109,
      60,    69,    86,    84,    60,    65,    91,   106,   108,    60,
     106,    94,    94,    94,    95,    95,    96,    96,    97,    97,
      97,    97,    98,    98,    99,   100,   101,   102,   103,   108,
      83,   141,   108,   108,   108,    51,   125,   145,    87,    87,
     141,   106,    65,   132,   136,    67,   106,   137,    64,    66,
      46,   134,    67,   121,   109,    65,    94,    67,    86,   138,
     140,   138,    65,    69,    67,    83,   141,    65,    65,    65,
      64,   145,   145,    65,    65,    67,    65,   132,    67,   106,
      84,   106,   105,   141,   141,   141,   108,    65,   108,    65,
     108,    65,    67,   138,    59,    65,   141,    65,   141,    65,
     141,    87,   141,   141
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    89,    89,    89,    90,    90,    90,    90,
      90,    90,    90,    90,    91,    91,    92,    92,    92,    92,
      92,    92,    93,    93,    93,    93,    93,    93,    94,    94,
      95,    95,    95,    95,    96,    96,    96,    97,    97,    97,
      98,    98,    98,    98,    98,    99,    99,    99,   100,   100,
     101,   101,   102,   102,   103,   103,   104,   104,   105,   105,
     106,   106,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   108,   108,   109,   110,   110,   110,   110,
     110,   110,   110,   110,   111,   111,   111,   111,   111,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   113,   113,   113,   114,   115,   115,   115,   116,   116,
     117,   117,   118,   119,   119,   119,   119,   120,   120,   121,
     121,   121,   122,   122,   122,   122,   122,   123,   123,   124,
     124,   125,   125,   126,   126,   127,   127,   128,   128,   129,
     129,   129,   129,   130,   130,   130,   130,   130,   130,   130,
     130,   131,   131,   132,   132,   133,   133,   134,   134,   134,
     135,   135,   136,   136,   136,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   138,   138,   138,   139,   139,   139,
     139,   140,   140,   141,   141,   141,   141,   141,   141,   142,
     142,   142,   143,   143,   144,   144,   144,   144,   145,   145,
     146,   146,   146,   147,   147,   147,   147,   147,   147,   148,
     148,   148,   148,   148,   149,   149,   149,   149,   150
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     1,     3,     1,     2,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     4,     2,     1,     1,
       1,     2,     3,     2,     1,     2,     1,     1,     3,     1,
       2,     3,     4,     5,     5,     6,     2,     1,     3,     1,
       3,     2,     3,     1,     3,     1,     3,     2,     1,     1,
       2,     2,     3,     1,     3,     5,     4,     4,     3,     4,
       3,     1,     2,     1,     3,     1,     3,     2,     2,     1,
       1,     2,     1,     1,     2,     3,     2,     3,     3,     4,
       2,     3,     3,     4,     1,     3,     4,     1,     3,     3,
       5,     3,     2,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     2,     3,     1,     1,     2,     2,     1,     2,
       5,     7,     5,     5,     7,     6,     7,     6,     7,     3,
       2,     2,     2,     3,     1,     1,     2,     2,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
        yyerror (&yylloc, scanner, parser_result, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, scanner, parser_result); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, struct AST_TranslationUnit **parser_result)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (parser_result);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, struct AST_TranslationUnit **parser_result)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp, scanner, parser_result);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, yyscan_t scanner, struct AST_TranslationUnit **parser_result)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , scanner, parser_result);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner, parser_result); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner, struct AST_TranslationUnit **parser_result)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (parser_result);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner, struct AST_TranslationUnit **parser_result)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 175 "parser/parser.y"
                                                                        { (yyval.expr) = AST_Primary::get_ident((yyvsp[0].ident_id)); }
#line 2082 "parser/parser.cpp"
    break;

  case 3:
#line 176 "parser/parser.y"
                                                                                { (yyval.expr) = AST_Primary::get_const((yyvsp[0].u64)); }
#line 2088 "parser/parser.cpp"
    break;

  case 4:
#line 177 "parser/parser.y"
                                                                        { (yyval.expr) = AST_Primary::get_str(new AST_String((yyvsp[0].str))); }
#line 2094 "parser/parser.cpp"
    break;

  case 5:
#line 178 "parser/parser.y"
                                                                        { (yyval.expr) = AST_Primary::get_expr((yyvsp[-1].expr)); }
#line 2100 "parser/parser.cpp"
    break;

  case 6:
#line 182 "parser/parser.y"
                                                                        { (yyval.expr) = (yyvsp[0].expr); }
#line 2106 "parser/parser.cpp"
    break;

  case 7:
#line 183 "parser/parser.y"
                                                                { (yyval.expr) = AST_Postfix::get_arr((yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 2112 "parser/parser.cpp"
    break;

  case 8:
#line 184 "parser/parser.y"
                                                                { (yyval.expr) = AST_Postfix::get_call((yyvsp[-2].expr), nullptr); }
#line 2118 "parser/parser.cpp"
    break;

  case 9:
#line 185 "parser/parser.y"
                                                        { (yyval.expr) = AST_Postfix::get_call((yyvsp[-3].expr), (yyvsp[-1].args_list)); }
#line 2124 "parser/parser.cpp"
    break;

  case 10:
#line 186 "parser/parser.y"
                                                        { (yyval.expr) = AST_Postfix::get_accesor((yyvsp[-2].expr), (yyvsp[0].ident_id), false); }
#line 2130 "parser/parser.cpp"
    break;

  case 11:
#line 187 "parser/parser.y"
                                                        { (yyval.expr) = AST_Postfix::get_accesor((yyvsp[-2].expr), (yyvsp[0].ident_id), true); }
#line 2136 "parser/parser.cpp"
    break;

  case 12:
#line 188 "parser/parser.y"
                                                                { (yyval.expr) = AST_Postfix::get_incdec((yyvsp[-1].expr), false); }
#line 2142 "parser/parser.cpp"
    break;

  case 13:
#line 189 "parser/parser.y"
                                                                { (yyval.expr) = AST_Postfix::get_incdec((yyvsp[-1].expr), true); }
#line 2148 "parser/parser.cpp"
    break;

  case 14:
#line 193 "parser/parser.y"
                                                                        { (yyval.args_list) = new AST_ArgumentsList(); }
#line 2154 "parser/parser.cpp"
    break;

  case 15:
#line 194 "parser/parser.y"
                                                        { (yyval.args_list) = (yyvsp[-2].args_list)->append((yyvsp[0].expr)); }
#line 2160 "parser/parser.cpp"
    break;

  case 16:
#line 198 "parser/parser.y"
                                                                        { (yyval.expr) = (yyvsp[0].expr); }
#line 2166 "parser/parser.cpp"
    break;

  case 17:
#line 199 "parser/parser.y"
                                                                        { (yyval.expr) = new AST_Unop(AST_Unop::PRE_INC, (yyvsp[0].expr)); }
#line 2172 "parser/parser.cpp"
    break;

  case 18:
#line 200 "parser/parser.y"
                                                                        { (yyval.expr) = new AST_Unop(AST_Unop::PRE_DEC, (yyvsp[0].expr)); }
#line 2178 "parser/parser.cpp"
    break;

  case 19:
#line 201 "parser/parser.y"
                                                                { (yyval.expr) = new AST_Unop(AST_Unop::OpType((yyvsp[-1].enum_val)), (yyvsp[0].expr)); }
#line 2184 "parser/parser.cpp"
    break;

  case 20:
#line 202 "parser/parser.y"
                                                                        { (yyval.expr) = new AST_Unop(AST_Unop::SIZEOF_OP, (yyvsp[0].expr)); }
#line 2190 "parser/parser.cpp"
    break;

  case 21:
#line 203 "parser/parser.y"
                                                                { (yyval.expr) = new AST_Unop(AST_Unop::SIZEOF_OP, (yyvsp[-1].type_name)); }
#line 2196 "parser/parser.cpp"
    break;

  case 22:
#line 207 "parser/parser.y"
                                                                                { (yyval.enum_val) = AST_Unop::ADDR_OF; }
#line 2202 "parser/parser.cpp"
    break;

  case 23:
#line 208 "parser/parser.y"
                                                                                { (yyval.enum_val) = AST_Unop::DEREF; }
#line 2208 "parser/parser.cpp"
    break;

  case 24:
#line 209 "parser/parser.y"
                                                                                { (yyval.enum_val) = AST_Unop::UN_PLUS; }
#line 2214 "parser/parser.cpp"
    break;

  case 25:
#line 210 "parser/parser.y"
                                                                                { (yyval.enum_val) = AST_Unop::UN_MINUS; }
#line 2220 "parser/parser.cpp"
    break;

  case 26:
#line 211 "parser/parser.y"
                                                                                { (yyval.enum_val) = AST_Unop::UN_NEG; }
#line 2226 "parser/parser.cpp"
    break;

  case 27:
#line 212 "parser/parser.y"
                                                                                { (yyval.enum_val) = AST_Unop::UN_NOT; }
#line 2232 "parser/parser.cpp"
    break;

  case 28:
#line 216 "parser/parser.y"
                                                                        { (yyval.expr) = (yyvsp[0].expr); }
#line 2238 "parser/parser.cpp"
    break;

  case 29:
#line 217 "parser/parser.y"
                                                        { (yyval.expr) = new AST_Cast((yyvsp[-2].type_name), (yyvsp[0].expr)); }
#line 2244 "parser/parser.cpp"
    break;

  case 30:
#line 221 "parser/parser.y"
                                                                                { (yyval.expr) = (yyvsp[0].expr); }
#line 2250 "parser/parser.cpp"
    break;

  case 31:
#line 222 "parser/parser.y"
                                                                { (yyval.expr) = new AST_Binop(AST_Binop::MUL, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2256 "parser/parser.cpp"
    break;

  case 32:
#line 223 "parser/parser.y"
                                                                { (yyval.expr) = new AST_Binop(AST_Binop::DIV, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2262 "parser/parser.cpp"
    break;

  case 33:
#line 224 "parser/parser.y"
                                                                { (yyval.expr) = new AST_Binop(AST_Binop::REM, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2268 "parser/parser.cpp"
    break;

  case 34:
#line 228 "parser/parser.y"
                                                                                { (yyval.expr) = (yyvsp[0].expr); }
#line 2274 "parser/parser.cpp"
    break;

  case 35:
#line 229 "parser/parser.y"
                                                                { (yyval.expr) = new AST_Binop(AST_Binop::ADD, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2280 "parser/parser.cpp"
    break;

  case 36:
#line 230 "parser/parser.y"
                                                                { (yyval.expr) = new AST_Binop(AST_Binop::SUB, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2286 "parser/parser.cpp"
    break;

  case 37:
#line 234 "parser/parser.y"
                                                                                { (yyval.expr) = (yyvsp[0].expr); }
#line 2292 "parser/parser.cpp"
    break;

  case 38:
#line 235 "parser/parser.y"
                                                        { (yyval.expr) = new AST_Binop(AST_Binop::SHL, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2298 "parser/parser.cpp"
    break;

  case 39:
#line 236 "parser/parser.y"
                                                        { (yyval.expr) = new AST_Binop(AST_Binop::SHR, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2304 "parser/parser.cpp"
    break;

  case 40:
#line 240 "parser/parser.y"
                                                                        { (yyval.expr) = (yyvsp[0].expr); }
#line 2310 "parser/parser.cpp"
    break;

  case 41:
#line 241 "parser/parser.y"
                                                                { (yyval.expr) = new AST_Binop(AST_Binop::LT, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2316 "parser/parser.cpp"
    break;

  case 42:
#line 242 "parser/parser.y"
                                                                { (yyval.expr) = new AST_Binop(AST_Binop::GT, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2322 "parser/parser.cpp"
    break;

  case 43:
#line 243 "parser/parser.y"
                                                                { (yyval.expr) = new AST_Binop(AST_Binop::LE, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2328 "parser/parser.cpp"
    break;

  case 44:
#line 244 "parser/parser.y"
                                                                { (yyval.expr) = new AST_Binop(AST_Binop::GE, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2334 "parser/parser.cpp"
    break;

  case 45:
#line 248 "parser/parser.y"
                                                                                { (yyval.expr) = (yyvsp[0].expr); }
#line 2340 "parser/parser.cpp"
    break;

  case 46:
#line 249 "parser/parser.y"
                                                                { (yyval.expr) = new AST_Binop(AST_Binop::EQ, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2346 "parser/parser.cpp"
    break;

  case 47:
#line 250 "parser/parser.y"
                                                                { (yyval.expr) = new AST_Binop(AST_Binop::NE, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2352 "parser/parser.cpp"
    break;

  case 48:
#line 254 "parser/parser.y"
                                                                                { (yyval.expr) = (yyvsp[0].expr); }
#line 2358 "parser/parser.cpp"
    break;

  case 49:
#line 255 "parser/parser.y"
                                                                { (yyval.expr) = new AST_Binop(AST_Binop::BIT_AND, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2364 "parser/parser.cpp"
    break;

  case 50:
#line 259 "parser/parser.y"
                                                                                { (yyval.expr) = (yyvsp[0].expr); }
#line 2370 "parser/parser.cpp"
    break;

  case 51:
#line 260 "parser/parser.y"
                                                                { (yyval.expr) = new AST_Binop(AST_Binop::BIT_XOR, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2376 "parser/parser.cpp"
    break;

  case 52:
#line 264 "parser/parser.y"
                                                                                { (yyval.expr) = (yyvsp[0].expr); }
#line 2382 "parser/parser.cpp"
    break;

  case 53:
#line 265 "parser/parser.y"
                                                                { (yyval.expr) = new AST_Binop(AST_Binop::BIT_OR, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2388 "parser/parser.cpp"
    break;

  case 54:
#line 269 "parser/parser.y"
                                                                                { (yyval.expr) = (yyvsp[0].expr); }
#line 2394 "parser/parser.cpp"
    break;

  case 55:
#line 270 "parser/parser.y"
                                                        { (yyval.expr) = new AST_Binop(AST_Binop::LOG_AND, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2400 "parser/parser.cpp"
    break;

  case 56:
#line 274 "parser/parser.y"
                                                                        { (yyval.expr) = (yyvsp[0].expr); }
#line 2406 "parser/parser.cpp"
    break;

  case 57:
#line 275 "parser/parser.y"
                                                        { (yyval.expr) = new AST_Binop(AST_Binop::LOG_OR, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2412 "parser/parser.cpp"
    break;

  case 58:
#line 279 "parser/parser.y"
                                                                                { (yyval.expr) = (yyvsp[0].expr); }
#line 2418 "parser/parser.cpp"
    break;

  case 59:
#line 280 "parser/parser.y"
                                                        { (yyval.expr) = new AST_Ternary((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2424 "parser/parser.cpp"
    break;

  case 60:
#line 284 "parser/parser.y"
                                                                                { (yyval.expr) = (yyvsp[0].expr); }
#line 2430 "parser/parser.cpp"
    break;

  case 61:
#line 285 "parser/parser.y"
                                                                { (yyval.expr) = new AST_Assignment(AST_Assignment::OpType((yyvsp[-1].enum_val)), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2436 "parser/parser.cpp"
    break;

  case 62:
#line 289 "parser/parser.y"
                                                                                        { (yyval.enum_val) = AST_Assignment::DIRECT; }
#line 2442 "parser/parser.cpp"
    break;

  case 63:
#line 290 "parser/parser.y"
                                                                                { (yyval.enum_val) = AST_Assignment::MUL; }
#line 2448 "parser/parser.cpp"
    break;

  case 64:
#line 291 "parser/parser.y"
                                                                                { (yyval.enum_val) = AST_Assignment::DIV; }
#line 2454 "parser/parser.cpp"
    break;

  case 65:
#line 292 "parser/parser.y"
                                                                                { (yyval.enum_val) = AST_Assignment::REM; }
#line 2460 "parser/parser.cpp"
    break;

  case 66:
#line 293 "parser/parser.y"
                                                                                { (yyval.enum_val) = AST_Assignment::ADD; }
#line 2466 "parser/parser.cpp"
    break;

  case 67:
#line 294 "parser/parser.y"
                                                                                { (yyval.enum_val) = AST_Assignment::SUB; }
#line 2472 "parser/parser.cpp"
    break;

  case 68:
#line 295 "parser/parser.y"
                                                                                { (yyval.enum_val) = AST_Assignment::SHL; }
#line 2478 "parser/parser.cpp"
    break;

  case 69:
#line 296 "parser/parser.y"
                                                                                { (yyval.enum_val) = AST_Assignment::SHR; }
#line 2484 "parser/parser.cpp"
    break;

  case 70:
#line 297 "parser/parser.y"
                                                                                { (yyval.enum_val) = AST_Assignment::AND; }
#line 2490 "parser/parser.cpp"
    break;

  case 71:
#line 298 "parser/parser.y"
                                                                                { (yyval.enum_val) = AST_Assignment::XOR; }
#line 2496 "parser/parser.cpp"
    break;

  case 72:
#line 299 "parser/parser.y"
                                                                                        { (yyval.enum_val) = AST_Assignment::OR; }
#line 2502 "parser/parser.cpp"
    break;

  case 73:
#line 303 "parser/parser.y"
                                                                                { (yyval.expr) = (yyvsp[0].expr); }
#line 2508 "parser/parser.cpp"
    break;

  case 74:
#line 304 "parser/parser.y"
                                                                        { (yyval.expr) = dynamic_cast<AST_CommaExpression*>((yyvsp[-2].expr))->append((yyvsp[0].expr)); }
#line 2514 "parser/parser.cpp"
    break;

  case 75:
#line 308 "parser/parser.y"
                                                                                { (yyval.expr) = (yyvsp[0].expr); }
#line 2520 "parser/parser.cpp"
    break;

  case 76:
#line 314 "parser/parser.y"
                                                                { (yyval.decl_specifiers) = (new AST_DeclSpecifiers())->update_storage((yyvsp[0].enum_val)); }
#line 2526 "parser/parser.cpp"
    break;

  case 77:
#line 315 "parser/parser.y"
                                                { (yyval.decl_specifiers) = (yyvsp[0].decl_specifiers)->update_storage((yyvsp[-1].enum_val)); }
#line 2532 "parser/parser.cpp"
    break;

  case 78:
#line 316 "parser/parser.y"
                                                                        { (yyval.decl_specifiers) = (new AST_DeclSpecifiers())->update_type_spec((yyvsp[0].type_specifier)); }
#line 2538 "parser/parser.cpp"
    break;

  case 79:
#line 317 "parser/parser.y"
                                                                { (yyval.decl_specifiers) = (yyvsp[0].decl_specifiers)->update_type_spec((yyvsp[-1].type_specifier)); }
#line 2544 "parser/parser.cpp"
    break;

  case 80:
#line 318 "parser/parser.y"
                                                                        { (yyval.decl_specifiers) = (new AST_DeclSpecifiers())->update_type_qual((yyvsp[0].enum_val)); }
#line 2550 "parser/parser.cpp"
    break;

  case 81:
#line 319 "parser/parser.y"
                                                                { (yyval.decl_specifiers) = (yyvsp[0].decl_specifiers)->update_type_qual((yyvsp[-1].enum_val)); }
#line 2556 "parser/parser.cpp"
    break;

  case 82:
#line 320 "parser/parser.y"
                                                                { (yyval.decl_specifiers) = (new AST_DeclSpecifiers())->update_func_qual((yyvsp[0].enum_val)); }
#line 2562 "parser/parser.cpp"
    break;

  case 83:
#line 321 "parser/parser.y"
                                                        { (yyval.decl_specifiers) = (yyvsp[0].decl_specifiers)->update_func_qual((yyvsp[-1].enum_val)); }
#line 2568 "parser/parser.cpp"
    break;

  case 84:
#line 325 "parser/parser.y"
                                                                                { (yyval.enum_val) = AST_DeclSpecifiers::ST_TYPEDEF; }
#line 2574 "parser/parser.cpp"
    break;

  case 85:
#line 326 "parser/parser.y"
                                                                                { (yyval.enum_val) = AST_DeclSpecifiers::ST_EXTERN; }
#line 2580 "parser/parser.cpp"
    break;

  case 86:
#line 327 "parser/parser.y"
                                                                                { (yyval.enum_val) = AST_DeclSpecifiers::ST_STATIC; }
#line 2586 "parser/parser.cpp"
    break;

  case 87:
#line 328 "parser/parser.y"
                                                                                { (yyval.enum_val) = AST_DeclSpecifiers::ST_AUTO; }
#line 2592 "parser/parser.cpp"
    break;

  case 88:
#line 329 "parser/parser.y"
                                                                                { (yyval.enum_val) = AST_DeclSpecifiers::ST_REGISTER; }
#line 2598 "parser/parser.cpp"
    break;

  case 89:
#line 333 "parser/parser.y"
                                                                                { (yyval.type_specifier) = new AST_TypeSpecifier(AST_TypeSpecifier::T_VOID); }
#line 2604 "parser/parser.cpp"
    break;

  case 90:
#line 334 "parser/parser.y"
                                                                                { (yyval.type_specifier) = new AST_TypeSpecifier(AST_TypeSpecifier::T_CHAR); }
#line 2610 "parser/parser.cpp"
    break;

  case 91:
#line 335 "parser/parser.y"
                                                                                { (yyval.type_specifier) = new AST_TypeSpecifier(AST_TypeSpecifier::T_SHORT); }
#line 2616 "parser/parser.cpp"
    break;

  case 92:
#line 336 "parser/parser.y"
                                                                                { (yyval.type_specifier) = new AST_TypeSpecifier(AST_TypeSpecifier::T_INT); }
#line 2622 "parser/parser.cpp"
    break;

  case 93:
#line 337 "parser/parser.y"
                                                                                { (yyval.type_specifier) = new AST_TypeSpecifier(AST_TypeSpecifier::T_LONG); }
#line 2628 "parser/parser.cpp"
    break;

  case 94:
#line 338 "parser/parser.y"
                                                                                { (yyval.type_specifier) = new AST_TypeSpecifier(AST_TypeSpecifier::T_FLOAT); }
#line 2634 "parser/parser.cpp"
    break;

  case 95:
#line 339 "parser/parser.y"
                                                                                { (yyval.type_specifier) = new AST_TypeSpecifier(AST_TypeSpecifier::T_DOUBLE); }
#line 2640 "parser/parser.cpp"
    break;

  case 96:
#line 340 "parser/parser.y"
                                                                                { (yyval.type_specifier) = new AST_TypeSpecifier(AST_TypeSpecifier::T_SIGNED); }
#line 2646 "parser/parser.cpp"
    break;

  case 97:
#line 341 "parser/parser.y"
                                                                                { (yyval.type_specifier) = new AST_TypeSpecifier(AST_TypeSpecifier::T_UNSIGNED); }
#line 2652 "parser/parser.cpp"
    break;

  case 98:
#line 342 "parser/parser.y"
                                                                        { (yyval.type_specifier) = new AST_TypeSpecifier((yyvsp[0].struct_or_union_spec)); }
#line 2658 "parser/parser.cpp"
    break;

  case 99:
#line 343 "parser/parser.y"
                                                                        { (yyval.type_specifier) = new AST_TypeSpecifier((yyvsp[0].enum_spec)); }
#line 2664 "parser/parser.cpp"
    break;

  case 100:
#line 344 "parser/parser.y"
                                                                                { (yyval.type_specifier) = new AST_TypeSpecifier(get_def_type((yyvsp[0].ident_id))); }
#line 2670 "parser/parser.cpp"
    break;

  case 101:
#line 348 "parser/parser.y"
                                                                                { (yyval.enum_val) = AST_TypeQualifiers::Q_CONST; }
#line 2676 "parser/parser.cpp"
    break;

  case 102:
#line 349 "parser/parser.y"
                                                                                { (yyval.enum_val) = AST_TypeQualifiers::Q_RESTRICT; }
#line 2682 "parser/parser.cpp"
    break;

  case 103:
#line 350 "parser/parser.y"
                                                                                { (yyval.enum_val) = AST_TypeQualifiers::Q_VOLATILE; }
#line 2688 "parser/parser.cpp"
    break;

  case 104:
#line 354 "parser/parser.y"
                                                                                { (yyval.enum_val) = AST_DeclSpecifiers::Q_INLINE; }
#line 2694 "parser/parser.cpp"
    break;

  case 105:
#line 358 "parser/parser.y"
                                                                { (yyval.struct_or_union_spec) = new AST_StructOrUsionSpec((yyvsp[-4].boolean), (yyvsp[-3].ident_id), (yyvsp[-1].struct_decl_lst)); }
#line 2700 "parser/parser.cpp"
    break;

  case 106:
#line 359 "parser/parser.y"
                                                                                { (yyval.struct_or_union_spec) = new AST_StructOrUsionSpec((yyvsp[-3].boolean), NO_IDENT_ID, (yyvsp[-1].struct_decl_lst)); }
#line 2706 "parser/parser.cpp"
    break;

  case 107:
#line 360 "parser/parser.y"
                                                                                                { (yyval.struct_or_union_spec) = new AST_StructOrUsionSpec((yyvsp[-1].boolean), (yyvsp[0].ident_id), nullptr); }
#line 2712 "parser/parser.cpp"
    break;

  case 108:
#line 364 "parser/parser.y"
                                                                                                        { (yyval.boolean) = 0; }
#line 2718 "parser/parser.cpp"
    break;

  case 109:
#line 365 "parser/parser.y"
                                                                                                        { (yyval.boolean) = 1; }
#line 2724 "parser/parser.cpp"
    break;

  case 110:
#line 369 "parser/parser.y"
                                                                                        { (yyval.struct_decl_lst) = new AST_StructDeclarationList((yyvsp[0].struct_decl)); }
#line 2730 "parser/parser.cpp"
    break;

  case 111:
#line 370 "parser/parser.y"
                                                                { (yyval.struct_decl_lst) = (yyvsp[-1].struct_decl_lst)->append((yyvsp[0].struct_decl)); }
#line 2736 "parser/parser.cpp"
    break;

  case 112:
#line 374 "parser/parser.y"
                                                                        { (yyval.struct_decl) = new AST_StructDeclaration((yyvsp[-2].spec_qual_lst), (yyvsp[-1].struct_delarator_lst)); }
#line 2742 "parser/parser.cpp"
    break;

  case 113:
#line 378 "parser/parser.y"
                                                                { (yyval.spec_qual_lst) = (yyvsp[0].spec_qual_lst)->append_spec((yyvsp[-1].type_specifier)); }
#line 2748 "parser/parser.cpp"
    break;

  case 114:
#line 379 "parser/parser.y"
                                                                                { (yyval.spec_qual_lst) = (new AST_SpecifierQualifierList((yyvsp[0].type_specifier))); }
#line 2754 "parser/parser.cpp"
    break;

  case 115:
#line 380 "parser/parser.y"
                                                                { (yyval.spec_qual_lst) = (yyvsp[0].spec_qual_lst)->append_qual(AST_TypeQualifiers::QualType((yyvsp[-1].enum_val))); }
#line 2760 "parser/parser.cpp"
    break;

  case 116:
#line 381 "parser/parser.y"
                                                                                { (yyval.spec_qual_lst) = new AST_SpecifierQualifierList(AST_TypeQualifiers::QualType((yyvsp[0].enum_val))); }
#line 2766 "parser/parser.cpp"
    break;

  case 117:
#line 385 "parser/parser.y"
                                                                                                { (yyval.struct_delarator_lst) = new AST_StructDeclaratorList((yyvsp[0].struct_delarator)); }
#line 2772 "parser/parser.cpp"
    break;

  case 118:
#line 386 "parser/parser.y"
                                                                { (yyval.struct_delarator_lst) = (yyvsp[-2].struct_delarator_lst)->append((yyvsp[0].struct_delarator)); }
#line 2778 "parser/parser.cpp"
    break;

  case 119:
#line 390 "parser/parser.y"
                                                                                                { (yyval.struct_delarator) = new AST_StructDeclarator((yyvsp[0].declarator), nullptr); }
#line 2784 "parser/parser.cpp"
    break;

  case 120:
#line 391 "parser/parser.y"
                                                                                                { (yyval.struct_delarator) = new AST_StructDeclarator(nullptr, (yyvsp[0].expr)); }
#line 2790 "parser/parser.cpp"
    break;

  case 121:
#line 392 "parser/parser.y"
                                                                                        { (yyval.struct_delarator) = new AST_StructDeclarator((yyvsp[-2].declarator), (yyvsp[0].expr)); }
#line 2796 "parser/parser.cpp"
    break;

  case 122:
#line 396 "parser/parser.y"
                                                                                { (yyval.enum_spec) = new AST_EnumSpecifier(NO_IDENT_ID, (yyvsp[-1].enumerator_lst)); }
#line 2802 "parser/parser.cpp"
    break;

  case 123:
#line 397 "parser/parser.y"
                                                                        { (yyval.enum_spec) = new AST_EnumSpecifier((yyvsp[-3].ident_id), (yyvsp[-1].enumerator_lst)); }
#line 2808 "parser/parser.cpp"
    break;

  case 124:
#line 398 "parser/parser.y"
                                                                                { (yyval.enum_spec) = new AST_EnumSpecifier(NO_IDENT_ID, (yyvsp[-2].enumerator_lst)); }
#line 2814 "parser/parser.cpp"
    break;

  case 125:
#line 399 "parser/parser.y"
                                                                { (yyval.enum_spec) = new AST_EnumSpecifier((yyvsp[-4].ident_id), (yyvsp[-2].enumerator_lst)); }
#line 2820 "parser/parser.cpp"
    break;

  case 126:
#line 400 "parser/parser.y"
                                                                                                { (yyval.enum_spec) = new AST_EnumSpecifier((yyvsp[0].ident_id), nullptr); }
#line 2826 "parser/parser.cpp"
    break;

  case 127:
#line 404 "parser/parser.y"
                                                                                                { (yyval.enumerator_lst) = new AST_EnumeratorList((yyvsp[0].enumerator)); }
#line 2832 "parser/parser.cpp"
    break;

  case 128:
#line 405 "parser/parser.y"
                                                                                { (yyval.enumerator_lst) = (yyvsp[-2].enumerator_lst)->append((yyvsp[0].enumerator)); }
#line 2838 "parser/parser.cpp"
    break;

  case 129:
#line 409 "parser/parser.y"
                                                                                                { (yyval.enumerator) = new AST_Enumerator((yyvsp[0].ident_id), nullptr); }
#line 2844 "parser/parser.cpp"
    break;

  case 130:
#line 410 "parser/parser.y"
                                                                                        { (yyval.enumerator) = new AST_Enumerator((yyvsp[-2].ident_id), (yyvsp[0].expr)); }
#line 2850 "parser/parser.cpp"
    break;

  case 131:
#line 417 "parser/parser.y"
                                                                                                { (yyval.declaration) = new AST_Declaration((yyvsp[-1].decl_specifiers), nullptr); }
#line 2856 "parser/parser.cpp"
    break;

  case 132:
#line 418 "parser/parser.y"
                                                                        { (yyval.declaration) = new AST_Declaration((yyvsp[-2].decl_specifiers), (yyvsp[-1].init_declarator_lst)); }
#line 2862 "parser/parser.cpp"
    break;

  case 133:
#line 422 "parser/parser.y"
                                                                                                { (yyval.init_declarator_lst) = new AST_InitDeclaratorList((yyvsp[0].init_declarator)); }
#line 2868 "parser/parser.cpp"
    break;

  case 134:
#line 423 "parser/parser.y"
                                                                        { (yyval.init_declarator_lst) = (yyvsp[-2].init_declarator_lst)->append((yyvsp[0].init_declarator)); }
#line 2874 "parser/parser.cpp"
    break;

  case 135:
#line 427 "parser/parser.y"
                                                                                                { (yyval.init_declarator) = new AST_InitDeclarator((yyvsp[0].declarator), nullptr); }
#line 2880 "parser/parser.cpp"
    break;

  case 136:
#line 428 "parser/parser.y"
                                                                                { (yyval.init_declarator) = new AST_InitDeclarator((yyvsp[-2].declarator), (yyvsp[0].initializer)); }
#line 2886 "parser/parser.cpp"
    break;

  case 137:
#line 432 "parser/parser.y"
                                                                                        { (yyval.declarator) = new AST_Declarator((yyvsp[0].dir_declarator), (yyvsp[-1].pointer)); }
#line 2892 "parser/parser.cpp"
    break;

  case 138:
#line 433 "parser/parser.y"
                                                                                                { (yyval.declarator) = new AST_Declarator((yyvsp[0].dir_declarator), nullptr); }
#line 2898 "parser/parser.cpp"
    break;

  case 139:
#line 437 "parser/parser.y"
                                                                { (yyval.pointer) = new AST_Pointer(nullptr, nullptr); }
#line 2904 "parser/parser.cpp"
    break;

  case 140:
#line 438 "parser/parser.y"
                                                        { (yyval.pointer) = new AST_Pointer((yyvsp[0].type_quals), nullptr); }
#line 2910 "parser/parser.cpp"
    break;

  case 141:
#line 439 "parser/parser.y"
                                                        { (yyval.pointer) = new AST_Pointer(nullptr, (yyvsp[0].pointer)); }
#line 2916 "parser/parser.cpp"
    break;

  case 142:
#line 440 "parser/parser.y"
                                                { (yyval.pointer) = new AST_Pointer((yyvsp[-1].type_quals), (yyvsp[0].pointer)); }
#line 2922 "parser/parser.cpp"
    break;

  case 143:
#line 444 "parser/parser.y"
                                                                                                        { (yyval.dir_declarator) = AST_DirectDeclarator::get_ident((yyvsp[0].ident_id)); }
#line 2928 "parser/parser.cpp"
    break;

  case 144:
#line 445 "parser/parser.y"
                                                                                                { (yyval.dir_declarator) = AST_DirectDeclarator::get_nested((yyvsp[-1].declarator)); }
#line 2934 "parser/parser.cpp"
    break;

  case 145:
#line 446 "parser/parser.y"
                                                                        { (yyval.dir_declarator) = AST_DirectDeclarator::get_arr((yyvsp[-4].dir_declarator), (yyvsp[-2].type_quals), (yyvsp[-1].expr)); }
#line 2940 "parser/parser.cpp"
    break;

  case 146:
#line 447 "parser/parser.y"
                                                                                { (yyval.dir_declarator) = AST_DirectDeclarator::get_arr((yyvsp[-3].dir_declarator), (yyvsp[-1].type_quals), nullptr); }
#line 2946 "parser/parser.cpp"
    break;

  case 147:
#line 448 "parser/parser.y"
                                                                                { (yyval.dir_declarator) = AST_DirectDeclarator::get_arr((yyvsp[-3].dir_declarator), nullptr, (yyvsp[-1].expr)); }
#line 2952 "parser/parser.cpp"
    break;

  case 148:
#line 449 "parser/parser.y"
                                                                                                { (yyval.dir_declarator) = AST_DirectDeclarator::get_arr((yyvsp[-2].dir_declarator), nullptr, nullptr); }
#line 2958 "parser/parser.cpp"
    break;

  case 149:
#line 450 "parser/parser.y"
                                                                                { (yyval.dir_declarator) = AST_DirectDeclarator::get_func((yyvsp[-3].dir_declarator), (yyvsp[-1].param_type_lst)); }
#line 2964 "parser/parser.cpp"
    break;

  case 150:
#line 451 "parser/parser.y"
                                                                                                { (yyval.dir_declarator) = AST_DirectDeclarator::get_func((yyvsp[-2].dir_declarator), nullptr); }
#line 2970 "parser/parser.cpp"
    break;

  case 151:
#line 455 "parser/parser.y"
                                                                                        { (yyval.type_quals) = new AST_TypeQualifiers(AST_TypeQualifiers::QualType((yyvsp[0].enum_val))); }
#line 2976 "parser/parser.cpp"
    break;

  case 152:
#line 456 "parser/parser.y"
                                                                        { (yyval.type_quals) = (yyvsp[-1].type_quals)->update(AST_TypeQualifiers::QualType((yyvsp[0].enum_val))); }
#line 2982 "parser/parser.cpp"
    break;

  case 153:
#line 460 "parser/parser.y"
                                                                                                { (yyval.param_type_lst) = new AST_ParameterTypeList((yyvsp[0].param_lst), false); }
#line 2988 "parser/parser.cpp"
    break;

  case 154:
#line 461 "parser/parser.y"
                                                                                { (yyval.param_type_lst) = new AST_ParameterTypeList((yyvsp[-2].param_lst), true); }
#line 2994 "parser/parser.cpp"
    break;

  case 155:
#line 465 "parser/parser.y"
                                                                                { (yyval.param_lst) = new AST_ParameterList((yyvsp[0].param_declaration)); }
#line 3000 "parser/parser.cpp"
    break;

  case 156:
#line 466 "parser/parser.y"
                                                                { (yyval.param_lst) = (yyvsp[-2].param_lst)->append((yyvsp[0].param_declaration)); }
#line 3006 "parser/parser.cpp"
    break;

  case 157:
#line 470 "parser/parser.y"
                                                                                { (yyval.param_declaration) = new AST_ParameterDeclaration((yyvsp[-1].decl_specifiers), (yyvsp[0].declarator), false); }
#line 3012 "parser/parser.cpp"
    break;

  case 158:
#line 471 "parser/parser.y"
                                                                        { (yyval.param_declaration) = new AST_ParameterDeclaration((yyvsp[-1].decl_specifiers), (yyvsp[0].abstract_decl), true); }
#line 3018 "parser/parser.cpp"
    break;

  case 159:
#line 472 "parser/parser.y"
                                                                                        { (yyval.param_declaration) = new AST_ParameterDeclaration((yyvsp[0].decl_specifiers), nullptr, false); }
#line 3024 "parser/parser.cpp"
    break;

  case 160:
#line 476 "parser/parser.y"
                                                                                        { (yyval.type_name) = new AST_TypeName((yyvsp[0].spec_qual_lst), nullptr); }
#line 3030 "parser/parser.cpp"
    break;

  case 161:
#line 477 "parser/parser.y"
                                                                        { (yyval.type_name) = new AST_TypeName((yyvsp[-1].spec_qual_lst), (yyvsp[0].abstract_decl)); }
#line 3036 "parser/parser.cpp"
    break;

  case 162:
#line 481 "parser/parser.y"
                                                                                                {  (yyval.abstract_decl) = new AST_AbstractDeclarator(nullptr, (yyvsp[0].pointer)); }
#line 3042 "parser/parser.cpp"
    break;

  case 163:
#line 482 "parser/parser.y"
                                                                                {  (yyval.abstract_decl) = new AST_AbstractDeclarator((yyvsp[0].dir_abstract_decl), nullptr); }
#line 3048 "parser/parser.cpp"
    break;

  case 164:
#line 483 "parser/parser.y"
                                                                        {  (yyval.abstract_decl) = new AST_AbstractDeclarator((yyvsp[0].dir_abstract_decl), (yyvsp[-1].pointer)); }
#line 3054 "parser/parser.cpp"
    break;

  case 165:
#line 487 "parser/parser.y"
                                                                                { (yyval.dir_abstract_decl) = AST_DirectAbstractDeclarator::get_nested((yyvsp[-1].abstract_decl)); }
#line 3060 "parser/parser.cpp"
    break;

  case 166:
#line 488 "parser/parser.y"
                                                                                                { (yyval.dir_abstract_decl) = AST_DirectAbstractDeclarator::get_arr(nullptr, nullptr); }
#line 3066 "parser/parser.cpp"
    break;

  case 167:
#line 489 "parser/parser.y"
                                                                                { (yyval.dir_abstract_decl) = AST_DirectAbstractDeclarator::get_arr(nullptr, (yyvsp[-1].expr)); }
#line 3072 "parser/parser.cpp"
    break;

  case 168:
#line 490 "parser/parser.y"
                                                                        { (yyval.dir_abstract_decl) = AST_DirectAbstractDeclarator::get_arr((yyvsp[-2].dir_abstract_decl), nullptr); }
#line 3078 "parser/parser.cpp"
    break;

  case 169:
#line 491 "parser/parser.y"
                                                                { (yyval.dir_abstract_decl) = AST_DirectAbstractDeclarator::get_arr((yyvsp[-3].dir_abstract_decl), (yyvsp[-1].expr)); }
#line 3084 "parser/parser.cpp"
    break;

  case 170:
#line 492 "parser/parser.y"
                                                                                                { (yyval.dir_abstract_decl) = AST_DirectAbstractDeclarator::get_func(nullptr, nullptr); }
#line 3090 "parser/parser.cpp"
    break;

  case 171:
#line 493 "parser/parser.y"
                                                                                { (yyval.dir_abstract_decl) = AST_DirectAbstractDeclarator::get_func(nullptr, (yyvsp[-1].param_type_lst)); }
#line 3096 "parser/parser.cpp"
    break;

  case 172:
#line 494 "parser/parser.y"
                                                                        { (yyval.dir_abstract_decl) = AST_DirectAbstractDeclarator::get_func((yyvsp[-2].dir_abstract_decl), nullptr); }
#line 3102 "parser/parser.cpp"
    break;

  case 173:
#line 495 "parser/parser.y"
                                                        { (yyval.dir_abstract_decl) = AST_DirectAbstractDeclarator::get_func((yyvsp[-3].dir_abstract_decl), (yyvsp[-1].param_type_lst)); }
#line 3108 "parser/parser.cpp"
    break;

  case 174:
#line 502 "parser/parser.y"
                                                                                        { (yyval.initializer) = new AST_Initializer((yyvsp[0].expr)); }
#line 3114 "parser/parser.cpp"
    break;

  case 175:
#line 503 "parser/parser.y"
                                                                                        { (yyval.initializer) = new AST_Initializer((yyvsp[-1].initializer_lst)); }
#line 3120 "parser/parser.cpp"
    break;

  case 176:
#line 504 "parser/parser.y"
                                                                                { (yyval.initializer) = new AST_Initializer((yyvsp[-2].initializer_lst)); }
#line 3126 "parser/parser.cpp"
    break;

  case 177:
#line 508 "parser/parser.y"
                                                                                        { (yyval.initializer_lst) = new AST_InitializerList((yyvsp[0].initializer), nullptr); }
#line 3132 "parser/parser.cpp"
    break;

  case 178:
#line 509 "parser/parser.y"
                                                                        { (yyval.initializer_lst) = new AST_InitializerList((yyvsp[0].initializer), (yyvsp[-2].designator)); }
#line 3138 "parser/parser.cpp"
    break;

  case 179:
#line 510 "parser/parser.y"
                                                                                { (yyval.initializer_lst) = (yyvsp[-2].initializer_lst)->append((yyvsp[0].initializer), nullptr); }
#line 3144 "parser/parser.cpp"
    break;

  case 180:
#line 511 "parser/parser.y"
                                                                { (yyval.initializer_lst) = (yyvsp[-4].initializer_lst)->append((yyvsp[0].initializer), (yyvsp[-2].designator)); }
#line 3150 "parser/parser.cpp"
    break;

  case 181:
#line 515 "parser/parser.y"
                                                                                { (yyval.designator) = new AST_Designator((yyvsp[-1].expr)); }
#line 3156 "parser/parser.cpp"
    break;

  case 182:
#line 516 "parser/parser.y"
                                                                                        { (yyval.designator) = new AST_Designator((yyvsp[0].ident_id)); }
#line 3162 "parser/parser.cpp"
    break;

  case 183:
#line 523 "parser/parser.y"
                                                                        { (yyval.stmt) = (yyvsp[0].label_stmt); }
#line 3168 "parser/parser.cpp"
    break;

  case 184:
#line 524 "parser/parser.y"
                                                                        { (yyval.stmt) = (yyvsp[0].compound_stmt); }
#line 3174 "parser/parser.cpp"
    break;

  case 185:
#line 525 "parser/parser.y"
                                                                                { (yyval.stmt) = (yyvsp[0].expr_stmt); }
#line 3180 "parser/parser.cpp"
    break;

  case 186:
#line 526 "parser/parser.y"
                                                                        { (yyval.stmt) = (yyvsp[0].select_stmt); }
#line 3186 "parser/parser.cpp"
    break;

  case 187:
#line 527 "parser/parser.y"
                                                                                { (yyval.stmt) = (yyvsp[0].iter_stmt); }
#line 3192 "parser/parser.cpp"
    break;

  case 188:
#line 528 "parser/parser.y"
                                                                                { (yyval.stmt) = (yyvsp[0].jump_stmt); }
#line 3198 "parser/parser.cpp"
    break;

  case 189:
#line 532 "parser/parser.y"
                                                                { (yyval.label_stmt) = new AST_LabeledStmt((yyvsp[-2].ident_id), (yyvsp[0].stmt), AST_LabeledStmt::SIMPL); }
#line 3204 "parser/parser.cpp"
    break;

  case 190:
#line 533 "parser/parser.y"
                                                                { (yyval.label_stmt) = new AST_LabeledStmt((yyvsp[-2].expr), (yyvsp[0].stmt), AST_LabeledStmt::SW_CASE); }
#line 3210 "parser/parser.cpp"
    break;

  case 191:
#line 534 "parser/parser.y"
                                                                        { (yyval.label_stmt) = new AST_LabeledStmt(nullptr, (yyvsp[0].stmt), AST_LabeledStmt::SW_DEFAULT); }
#line 3216 "parser/parser.cpp"
    break;

  case 192:
#line 538 "parser/parser.y"
                                                                                { (yyval.compound_stmt) = new AST_CompoundStmt(new AST_BlockItemList()); }
#line 3222 "parser/parser.cpp"
    break;

  case 193:
#line 539 "parser/parser.y"
                                                                { (yyval.compound_stmt) = new AST_CompoundStmt((yyvsp[-1].block_item_lst)); }
#line 3228 "parser/parser.cpp"
    break;

  case 194:
#line 543 "parser/parser.y"
                                                                        { (yyval.block_item_lst) = (new AST_BlockItemList())->append((yyvsp[0].declaration)); }
#line 3234 "parser/parser.cpp"
    break;

  case 195:
#line 544 "parser/parser.y"
                                                                                { (yyval.block_item_lst) = (new AST_BlockItemList())->append((yyvsp[0].stmt)); }
#line 3240 "parser/parser.cpp"
    break;

  case 196:
#line 545 "parser/parser.y"
                                                        { (yyval.block_item_lst) = (yyvsp[-1].block_item_lst)->append((yyvsp[0].declaration)); }
#line 3246 "parser/parser.cpp"
    break;

  case 197:
#line 546 "parser/parser.y"
                                                                { (yyval.block_item_lst) = (yyvsp[-1].block_item_lst)->append((yyvsp[0].stmt)); }
#line 3252 "parser/parser.cpp"
    break;

  case 198:
#line 550 "parser/parser.y"
                                                                                { (yyval.expr_stmt) = new AST_ExprStmt(nullptr); }
#line 3258 "parser/parser.cpp"
    break;

  case 199:
#line 551 "parser/parser.y"
                                                                                { (yyval.expr_stmt) = new AST_ExprStmt((yyvsp[-1].expr)); }
#line 3264 "parser/parser.cpp"
    break;

  case 200:
#line 555 "parser/parser.y"
                                                        { (yyval.select_stmt) = AST_SelectionStmt::get_if((yyvsp[-2].expr), (yyvsp[0].stmt), nullptr); }
#line 3270 "parser/parser.cpp"
    break;

  case 201:
#line 556 "parser/parser.y"
                                                        { (yyval.select_stmt) = AST_SelectionStmt::get_if((yyvsp[-4].expr), (yyvsp[-2].stmt), (yyvsp[0].stmt)); }
#line 3276 "parser/parser.cpp"
    break;

  case 202:
#line 557 "parser/parser.y"
                                                                { (yyval.select_stmt) = AST_SelectionStmt::get_switch((yyvsp[-2].expr), (yyvsp[0].stmt)); }
#line 3282 "parser/parser.cpp"
    break;

  case 203:
#line 561 "parser/parser.y"
                                                                                        { (yyval.iter_stmt) = AST_IterationStmt::get_while((yyvsp[0].stmt), (yyvsp[-2].expr), false); }
#line 3288 "parser/parser.cpp"
    break;

  case 204:
#line 562 "parser/parser.y"
                                                                                { (yyval.iter_stmt) = AST_IterationStmt::get_while((yyvsp[-5].stmt), (yyvsp[-2].expr), true); }
#line 3294 "parser/parser.cpp"
    break;

  case 205:
#line 563 "parser/parser.y"
                                                                        { (yyval.iter_stmt) = AST_IterationStmt::get_for((yyvsp[0].stmt), (yyvsp[-3].expr_stmt), (yyvsp[-2].expr_stmt), nullptr); }
#line 3300 "parser/parser.cpp"
    break;

  case 206:
#line 564 "parser/parser.y"
                                                                        { (yyval.iter_stmt) = AST_IterationStmt::get_for((yyvsp[0].stmt), (yyvsp[-4].expr_stmt), (yyvsp[-3].expr_stmt), (yyvsp[-2].expr)); }
#line 3306 "parser/parser.cpp"
    break;

  case 207:
#line 565 "parser/parser.y"
                                                                        { (yyval.iter_stmt) = AST_IterationStmt::get_for((yyvsp[0].stmt), (yyvsp[-3].declaration), (yyvsp[-2].expr_stmt), nullptr); }
#line 3312 "parser/parser.cpp"
    break;

  case 208:
#line 566 "parser/parser.y"
                                                                { (yyval.iter_stmt) = AST_IterationStmt::get_for((yyvsp[0].stmt), (yyvsp[-4].declaration), (yyvsp[-3].expr_stmt), (yyvsp[-2].expr)); }
#line 3318 "parser/parser.cpp"
    break;

  case 209:
#line 570 "parser/parser.y"
                                                                                        { (yyval.jump_stmt) = new AST_JumpStmt(AST_JumpStmt::J_GOTO, (yyvsp[-1].ident_id)); }
#line 3324 "parser/parser.cpp"
    break;

  case 210:
#line 571 "parser/parser.y"
                                                                                                { (yyval.jump_stmt) = new AST_JumpStmt(AST_JumpStmt::J_CONTINUE); }
#line 3330 "parser/parser.cpp"
    break;

  case 211:
#line 572 "parser/parser.y"
                                                                                                        { (yyval.jump_stmt) = new AST_JumpStmt(AST_JumpStmt::J_BREAK); }
#line 3336 "parser/parser.cpp"
    break;

  case 212:
#line 573 "parser/parser.y"
                                                                                                { (yyval.jump_stmt) = new AST_JumpStmt(AST_JumpStmt::J_RET); }
#line 3342 "parser/parser.cpp"
    break;

  case 213:
#line 574 "parser/parser.y"
                                                                                                { (yyval.jump_stmt) = new AST_JumpStmt(AST_JumpStmt::J_RET, (yyvsp[-1].expr)); }
#line 3348 "parser/parser.cpp"
    break;

  case 214:
#line 581 "parser/parser.y"
                                                                        { (yyval.trans_unit) = *parser_result = (new AST_TranslationUnit())->append((yyvsp[0].func_def)); }
#line 3354 "parser/parser.cpp"
    break;

  case 215:
#line 582 "parser/parser.y"
                                                                { (yyval.trans_unit) = *parser_result = (new AST_TranslationUnit())->append((yyvsp[0].declaration)); check_typedef((yyvsp[0].declaration)); }
#line 3360 "parser/parser.cpp"
    break;

  case 216:
#line 583 "parser/parser.y"
                                                        { (yyval.trans_unit) = (yyvsp[-1].trans_unit)->append((yyvsp[0].func_def)); }
#line 3366 "parser/parser.cpp"
    break;

  case 217:
#line 584 "parser/parser.y"
                                                { (yyval.trans_unit) = (yyvsp[-1].trans_unit)->append((yyvsp[0].declaration)); check_typedef((yyvsp[0].declaration)); }
#line 3372 "parser/parser.cpp"
    break;

  case 218:
#line 588 "parser/parser.y"
                                                                        { (yyval.func_def) = new AST_FunctionDef((yyvsp[-2].decl_specifiers), (yyvsp[-1].declarator), (yyvsp[0].compound_stmt)); }
#line 3378 "parser/parser.cpp"
    break;


#line 3382 "parser/parser.cpp"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, scanner, parser_result, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, scanner, parser_result, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, scanner, parser_result);
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, scanner, parser_result);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, scanner, parser_result, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, scanner, parser_result);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, yylsp, scanner, parser_result);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 592 "parser/parser.y"


AST_TranslationUnit* parse_program(std::string const &str) {
	yyscan_t scanner;
	lex_extra_t extra;
	init_scanner(str.c_str(), &scanner, &extra);
	AST_TranslationUnit *res;
	yyparse(scanner, &res);
	destroy_scanner(scanner);
	return res;
}
