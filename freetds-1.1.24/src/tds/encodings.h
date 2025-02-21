/*
 * This file produced from ./encodings.pl on Tue Dec 10 09:01:13 2019
 */
#ifdef TDS_ICONV_ENCODING_TABLES

static const TDS_ENCODING canonic_charsets[] = {
	{        "ISO-8859-1",	1, 1,   0},	/*   0 */
	{             "UTF-8",	1, 4,   1},	/*   1 */
	{           "UCS-2LE",	2, 2,   2},	/*   2 */
	{           "UCS-2BE",	2, 2,   3},	/*   3 */
	{         "ARMSCII-8",	1, 1,   4},	/*   4 */
	{             "BIG-5",	1, 2,   5},	/*   5 */
	{        "BIG5-HKSCS",	1, 2,   6},	/*   6 */
	{               "C99",	1, 1,   7},	/*   7 */
	{           "CHINESE",	1, 1,   8},	/*   8 */
	{                "CN",	1, 1,   9},	/*   9 */
	{             "CN-GB",	1, 2,  10},	/*  10 */
	{    "CN-GB-ISOIR165",	1, 1,  11},	/*  11 */
	{            "CP1133",	1, 1,  12},	/*  12 */
	{            "CP1250",	1, 1,  13},	/*  13 */
	{            "CP1251",	1, 1,  14},	/*  14 */
	{            "CP1252",	1, 1,  15},	/*  15 */
	{            "CP1253",	1, 1,  16},	/*  16 */
	{            "CP1254",	1, 1,  17},	/*  17 */
	{            "CP1255",	1, 1,  18},	/*  18 */
	{            "CP1256",	1, 1,  19},	/*  19 */
	{            "CP1257",	1, 1,  20},	/*  20 */
	{            "CP1258",	1, 1,  21},	/*  21 */
	{            "CP1361",	1, 2,  22},	/*  22 */
	{             "CP437",	1, 1,  23},	/*  23 */
	{             "CP850",	1, 1,  24},	/*  24 */
	{             "CP862",	1, 1,  25},	/*  25 */
	{             "CP866",	1, 1,  26},	/*  26 */
	{             "CP874",	1, 1,  27},	/*  27 */
	{             "CP932",	1, 2,  28},	/*  28 */
	{             "CP936",	1, 2,  29},	/*  29 */
	{             "CP949",	1, 2,  30},	/*  30 */
	{             "CP950",	1, 2,  31},	/*  31 */
	{            "EUC-JP",	1, 3,  32},	/*  32 */
	{            "EUC-KR",	1, 2,  33},	/*  33 */
	{            "EUC-TW",	1, 4,  34},	/*  34 */
	{           "GB18030",	1, 4,  35},	/*  35 */
	{  "GEORGIAN-ACADEMY",	1, 1,  36},	/*  36 */
	{       "GEORGIAN-PS",	1, 1,  37},	/*  37 */
	{                "HZ",	1, 1,  38},	/*  38 */
	{       "ISO-2022-CN",	1, 4,  39},	/*  39 */
	{   "ISO-2022-CN-EXT",	1, 4,  40},	/*  40 */
	{       "ISO-2022-JP",	1, 1,  41},	/*  41 */
	{     "ISO-2022-JP-1",	1, 1,  42},	/*  42 */
	{     "ISO-2022-JP-2",	1, 1,  43},	/*  43 */
	{       "ISO-2022-KR",	1, 2,  44},	/*  44 */
	{       "ISO-8859-10",	1, 1,  45},	/*  45 */
	{       "ISO-8859-13",	1, 1,  46},	/*  46 */
	{       "ISO-8859-14",	1, 1,  47},	/*  47 */
	{       "ISO-8859-15",	1, 1,  48},	/*  48 */
	{       "ISO-8859-16",	1, 1,  49},	/*  49 */
	{        "ISO-8859-2",	1, 1,  50},	/*  50 */
	{        "ISO-8859-3",	1, 1,  51},	/*  51 */
	{        "ISO-8859-4",	1, 1,  52},	/*  52 */
	{        "ISO-8859-5",	1, 1,  53},	/*  53 */
	{        "ISO-8859-6",	1, 1,  54},	/*  54 */
	{        "ISO-8859-7",	1, 1,  55},	/*  55 */
	{        "ISO-8859-8",	1, 1,  56},	/*  56 */
	{        "ISO-8859-9",	1, 1,  57},	/*  57 */
	{         "ISO-IR-14",	1, 1,  58},	/*  58 */
	{        "ISO-IR-149",	1, 1,  59},	/*  59 */
	{        "ISO-IR-159",	1, 1,  60},	/*  60 */
	{        "ISO-IR-166",	1, 1,  61},	/*  61 */
	{         "ISO-IR-87",	1, 1,  62},	/*  62 */
	{              "JAVA",	1, 1,  63},	/*  63 */
	{     "JISX0201-1976",	1, 1,  64},	/*  64 */
	{            "KOI8-R",	1, 1,  65},	/*  65 */
	{           "KOI8-RU",	1, 1,  66},	/*  66 */
	{            "KOI8-T",	1, 1,  67},	/*  67 */
	{            "KOI8-U",	1, 1,  68},	/*  68 */
	{               "MAC",	1, 1,  69},	/*  69 */
	{         "MACARABIC",	1, 1,  70},	/*  70 */
	{  "MACCENTRALEUROPE",	1, 1,  71},	/*  71 */
	{       "MACCROATIAN",	1, 1,  72},	/*  72 */
	{       "MACCYRILLIC",	1, 1,  73},	/*  73 */
	{          "MACGREEK",	1, 1,  74},	/*  74 */
	{         "MACHEBREW",	1, 1,  75},	/*  75 */
	{        "MACICELAND",	1, 1,  76},	/*  76 */
	{        "MACROMANIA",	1, 1,  77},	/*  77 */
	{           "MACTHAI",	1, 1,  78},	/*  78 */
	{        "MACTURKISH",	1, 1,  79},	/*  79 */
	{        "MACUKRAINE",	1, 1,  80},	/*  80 */
	{         "MULELAO-1",	1, 1,  81},	/*  81 */
	{          "NEXTSTEP",	1, 1,  82},	/*  82 */
	{            "ROMAN8",	1, 1,  83},	/*  83 */
	{              "SJIS",	1, 2,  84},	/*  84 */
	{              "TCVN",	1, 1,  85},	/*  85 */
	{           "UCS-4BE",	4, 4,  86},	/*  86 */
	{           "UCS-4LE",	4, 4,  87},	/*  87 */
	{          "US-ASCII",	1, 1,  88},	/*  88 */
	{          "UTF-16BE",	2, 4,  89},	/*  89 */
	{          "UTF-16LE",	2, 4,  90},	/*  90 */
	{          "UTF-32BE",	4, 4,  91},	/*  91 */
	{          "UTF-32LE",	4, 4,  92},	/*  92 */
	{             "UTF-7",	1, 4,  93},	/*  93 */
	{            "VISCII",	1, 1,  94},	/*  94 */
};

static const CHARACTER_SET_ALIAS iconv_aliases[] = {
	{                    "646",   88 },
	{                    "850",   24 },
	{                    "862",   25 },
	{                    "866",   26 },
	{         "ANSI_X3.4-1968",   88 },
	{         "ANSI_X3.4-1986",   88 },
	{                 "ARABIC",   54 },
	{              "ARMSCII-8",    4 },
	{                  "ASCII",   88 },
	{               "ASMO-708",   54 },
	{                  "BIG-5",    5 },
	{               "BIG-FIVE",    5 },
	{                   "BIG5",    5 },
	{             "BIG5-HKSCS",    6 },
	{              "BIG5HKSCS",    6 },
	{                "BIGFIVE",    5 },
	{                    "C99",    7 },
	{                "CHINESE",    8 },
	{                     "CN",    9 },
	{                "CN-BIG5",    5 },
	{                  "CN-GB",   10 },
	{         "CN-GB-ISOIR165",   11 },
	{                 "CP1133",   12 },
	{                 "CP1250",   13 },
	{                 "CP1251",   14 },
	{                 "CP1252",   15 },
	{                 "CP1253",   16 },
	{                 "CP1254",   17 },
	{                 "CP1255",   18 },
	{                 "CP1256",   19 },
	{                 "CP1257",   20 },
	{                 "CP1258",   21 },
	{                 "CP1361",   22 },
	{                  "CP367",   88 },
	{                  "CP437",   23 },
	{                  "CP819",    0 },
	{                  "CP850",   24 },
	{                  "CP862",   25 },
	{                  "CP866",   26 },
	{                  "CP874",   27 },
	{                  "CP932",   28 },
	{                  "CP936",   29 },
	{                  "CP949",   30 },
	{                  "CP950",   31 },
	{                "CSASCII",   88 },
	{                 "CSBIG5",    5 },
	{                "CSEUCKR",   33 },
	{    "CSEUCPKDFMTJAPANESE",   32 },
	{                "CSEUCTW",   34 },
	{               "CSGB2312",   10 },
	{    "CSHALFWIDTHKATAKANA",   64 },
	{             "CSHPROMAN8",   83 },
	{               "CSIBM866",   26 },
	{      "CSISO14JISC6220RO",   58 },
	{   "CSISO159JISX02121990",   60 },
	{            "CSISO2022CN",   39 },
	{            "CSISO2022JP",   41 },
	{           "CSISO2022JP2",   43 },
	{            "CSISO2022KR",   44 },
	{          "CSISO57GB1988",    9 },
	{        "CSISO58GB231280",    8 },
	{        "CSISO87JISX0208",   62 },
	{            "CSISOLATIN1",    0 },
	{            "CSISOLATIN2",   50 },
	{            "CSISOLATIN3",   51 },
	{            "CSISOLATIN4",   52 },
	{            "CSISOLATIN5",   57 },
	{            "CSISOLATIN6",   45 },
	{       "CSISOLATINARABIC",   54 },
	{     "CSISOLATINCYRILLIC",   53 },
	{        "CSISOLATINGREEK",   55 },
	{       "CSISOLATINHEBREW",   56 },
	{                "CSKOI8R",   65 },
	{          "CSKSC56011987",   59 },
	{            "CSMACINTOSH",   69 },
	{    "CSPC850MULTILINGUAL",   24 },
	{     "CSPC862LATINHEBREW",   25 },
	{             "CSSHIFTJIS",   84 },
	{            "CSUNICODE11",    3 },
	{        "CSUNICODE11UTF7",   93 },
	{               "CSVISCII",   94 },
	{               "CYRILLIC",   53 },
	{               "ECMA-114",   54 },
	{               "ECMA-118",   55 },
	{               "ELOT_928",   55 },
	{                 "EUC-CN",   10 },
	{                 "EUC-JP",   32 },
	{                 "EUC-KR",   33 },
	{                 "EUC-TW",   34 },
	{                  "EUCCN",   10 },
	{                  "EUCJP",   32 },
	{                  "EUCKR",   33 },
	{                  "EUCTW",   34 },
	{"EXTENDED_UNIX_CODE_PACKED_FORMAT_FOR_JAPANESE",   32 },
	{                "GB18030",   35 },
	{                 "GB2312",   10 },
	{                    "GBK",   29 },
	{             "GB_1988-80",    9 },
	{             "GB_2312-80",    8 },
	{       "GEORGIAN-ACADEMY",   36 },
	{            "GEORGIAN-PS",   37 },
	{                  "GREEK",   55 },
	{                 "GREEK8",   55 },
	{                 "HEBREW",   56 },
	{              "HP-ROMAN8",   83 },
	{                     "HZ",   38 },
	{             "HZ-GB-2312",   38 },
	{             "IBM-CP1133",   12 },
	{                 "IBM367",   88 },
	{                 "IBM437",   23 },
	{                 "IBM819",    0 },
	{                 "IBM850",   24 },
	{                 "IBM862",   25 },
	{                 "IBM866",   26 },
	{            "ISO-2022-CN",   39 },
	{        "ISO-2022-CN-EXT",   40 },
	{            "ISO-2022-JP",   41 },
	{          "ISO-2022-JP-1",   42 },
	{          "ISO-2022-JP-2",   43 },
	{            "ISO-2022-KR",   44 },
	{             "ISO-8859-1",    0 },
	{            "ISO-8859-10",   45 },
	{            "ISO-8859-13",   46 },
	{            "ISO-8859-14",   47 },
	{            "ISO-8859-15",   48 },
	{            "ISO-8859-16",   49 },
	{             "ISO-8859-2",   50 },
	{             "ISO-8859-3",   51 },
	{             "ISO-8859-4",   52 },
	{             "ISO-8859-5",   53 },
	{             "ISO-8859-6",   54 },
	{             "ISO-8859-7",   55 },
	{             "ISO-8859-8",   56 },
	{             "ISO-8859-9",   57 },
	{             "ISO-CELTIC",   47 },
	{             "ISO-IR-100",    0 },
	{             "ISO-IR-101",   50 },
	{             "ISO-IR-109",   51 },
	{             "ISO-IR-110",   52 },
	{             "ISO-IR-126",   55 },
	{             "ISO-IR-127",   54 },
	{             "ISO-IR-138",   56 },
	{              "ISO-IR-14",   58 },
	{             "ISO-IR-144",   53 },
	{             "ISO-IR-148",   57 },
	{             "ISO-IR-149",   59 },
	{             "ISO-IR-157",   45 },
	{             "ISO-IR-159",   60 },
	{             "ISO-IR-165",   11 },
	{             "ISO-IR-166",   61 },
	{             "ISO-IR-179",   46 },
	{             "ISO-IR-199",   47 },
	{             "ISO-IR-203",   48 },
	{             "ISO-IR-226",   49 },
	{              "ISO-IR-57",    9 },
	{              "ISO-IR-58",    8 },
	{               "ISO-IR-6",   88 },
	{              "ISO-IR-87",   62 },
	{              "ISO646-CN",    9 },
	{              "ISO646-JP",   58 },
	{              "ISO646-US",   88 },
	{              "ISO8859-1",    0 },
	{             "ISO8859-10",   45 },
	{             "ISO8859-15",   48 },
	{              "ISO8859-2",   50 },
	{              "ISO8859-4",   52 },
	{              "ISO8859-5",   53 },
	{              "ISO8859-6",   54 },
	{              "ISO8859-7",   55 },
	{              "ISO8859-8",   56 },
	{              "ISO8859-9",   57 },
	{       "ISO_646.IRV:1991",   88 },
	{             "ISO_8859-1",    0 },
	{            "ISO_8859-10",   45 },
	{       "ISO_8859-10:1992",   45 },
	{            "ISO_8859-13",   46 },
	{            "ISO_8859-14",   47 },
	{       "ISO_8859-14:1998",   47 },
	{            "ISO_8859-15",   48 },
	{       "ISO_8859-15:1998",   48 },
	{            "ISO_8859-16",   49 },
	{       "ISO_8859-16:2000",   49 },
	{        "ISO_8859-1:1987",    0 },
	{             "ISO_8859-2",   50 },
	{        "ISO_8859-2:1987",   50 },
	{             "ISO_8859-3",   51 },
	{        "ISO_8859-3:1988",   51 },
	{             "ISO_8859-4",   52 },
	{        "ISO_8859-4:1988",   52 },
	{             "ISO_8859-5",   53 },
	{        "ISO_8859-5:1988",   53 },
	{             "ISO_8859-6",   54 },
	{        "ISO_8859-6:1987",   54 },
	{             "ISO_8859-7",   55 },
	{        "ISO_8859-7:1987",   55 },
	{             "ISO_8859-8",   56 },
	{        "ISO_8859-8:1988",   56 },
	{             "ISO_8859-9",   57 },
	{        "ISO_8859-9:1989",   57 },
	{                   "JAVA",   63 },
	{                "JIS0208",   62 },
	{          "JISX0201-1976",   64 },
	{      "JIS_C6220-1969-RO",   58 },
	{         "JIS_C6226-1983",   62 },
	{              "JIS_X0201",   64 },
	{              "JIS_X0208",   62 },
	{         "JIS_X0208-1983",   62 },
	{         "JIS_X0208-1990",   62 },
	{              "JIS_X0212",   60 },
	{         "JIS_X0212-1990",   60 },
	{       "JIS_X0212.1990-0",   60 },
	{                  "JOHAB",   22 },
	{                     "JP",   58 },
	{                 "KOI8-R",   65 },
	{                "KOI8-RU",   66 },
	{                 "KOI8-T",   67 },
	{                 "KOI8-U",   68 },
	{                 "KOREAN",   59 },
	{               "KSC_5601",   59 },
	{         "KS_C_5601-1987",   59 },
	{         "KS_C_5601-1989",   59 },
	{                     "L1",    0 },
	{                     "L2",   50 },
	{                     "L3",   51 },
	{                     "L4",   52 },
	{                     "L5",   57 },
	{                     "L6",   45 },
	{                     "L7",   46 },
	{                     "L8",   47 },
	{                 "LATIN1",    0 },
	{                 "LATIN2",   50 },
	{                 "LATIN3",   51 },
	{                 "LATIN4",   52 },
	{                 "LATIN5",   57 },
	{                 "LATIN6",   45 },
	{                 "LATIN7",   46 },
	{                 "LATIN8",   47 },
	{                    "MAC",   69 },
	{              "MACARABIC",   70 },
	{       "MACCENTRALEUROPE",   71 },
	{            "MACCROATIAN",   72 },
	{            "MACCYRILLIC",   73 },
	{               "MACGREEK",   74 },
	{              "MACHEBREW",   75 },
	{             "MACICELAND",   76 },
	{              "MACINTOSH",   69 },
	{               "MACROMAN",   69 },
	{             "MACROMANIA",   77 },
	{                "MACTHAI",   78 },
	{             "MACTURKISH",   79 },
	{             "MACUKRAINE",   80 },
	{                "MS-ANSI",   15 },
	{                "MS-ARAB",   19 },
	{                "MS-CYRL",   14 },
	{                  "MS-EE",   13 },
	{               "MS-GREEK",   16 },
	{                "MS-HEBR",   18 },
	{                "MS-TURK",   17 },
	{               "MS_KANJI",   84 },
	{              "MULELAO-1",   81 },
	{               "NEXTSTEP",   82 },
	{                     "R8",   83 },
	{                 "ROMAN8",   83 },
	{              "SHIFT-JIS",   84 },
	{              "SHIFT_JIS",   84 },
	{                   "SJIS",   84 },
	{                   "TCVN",   85 },
	{              "TCVN-5712",   85 },
	{             "TCVN5712-1",   85 },
	{        "TCVN5712-1:1993",   85 },
	{                "TIS-620",   61 },
	{                 "TIS620",   61 },
	{               "TIS620-0",   61 },
	{          "TIS620.2529-1",   61 },
	{          "TIS620.2533-0",   61 },
	{          "TIS620.2533-1",   61 },
	{                "UCS-2BE",    3 },
	{                "UCS-2LE",    2 },
	{                "UCS-4BE",   86 },
	{                "UCS-4LE",   87 },
	{                    "UHC",   30 },
	{            "UNICODE-1-1",    3 },
	{      "UNICODE-1-1-UTF-7",   93 },
	{             "UNICODEBIG",    3 },
	{          "UNICODELITTLE",    2 },
	{                     "US",   88 },
	{               "US-ASCII",   88 },
	{               "UTF-16BE",   89 },
	{               "UTF-16LE",   90 },
	{               "UTF-32BE",   91 },
	{               "UTF-32LE",   92 },
	{                  "UTF-7",   93 },
	{                  "UTF-8",    1 },
	{                   "UTF7",   93 },
	{                   "UTF8",    1 },
	{                 "VISCII",   94 },
	{            "VISCII1.1-1",   94 },
	{             "WINBALTRIM",   20 },
	{           "WINDOWS-1250",   13 },
	{           "WINDOWS-1251",   14 },
	{           "WINDOWS-1252",   15 },
	{           "WINDOWS-1253",   16 },
	{           "WINDOWS-1254",   17 },
	{           "WINDOWS-1255",   18 },
	{           "WINDOWS-1256",   19 },
	{           "WINDOWS-1257",   20 },
	{           "WINDOWS-1258",   21 },
	{            "WINDOWS-874",   27 },
	{                  "X0201",   64 },
	{                  "X0208",   62 },
	{                  "X0212",   60 },
	{                   "big5",    5 },
	{                 "cp1250",   13 },
	{                 "cp1251",   14 },
	{                 "cp1252",   15 },
	{                 "cp1253",   16 },
	{                 "cp1254",   17 },
	{                 "cp1255",   18 },
	{                 "cp1256",   19 },
	{                 "cp1257",   20 },
	{                 "cp1258",   21 },
	{                  "cp437",   23 },
	{                  "cp850",   24 },
	{                  "cp862",   25 },
	{                  "cp866",   26 },
	{                  "cp874",   27 },
	{                  "eucJP",   32 },
	{                  "eucKR",   33 },
	{                  "eucTW",   34 },
	{                 "hp15CN",    8 },
	{                  "iso81",    0 },
	{                 "iso815",   48 },
	{                  "iso82",   50 },
	{                  "iso83",   51 },
	{                  "iso84",   52 },
	{                  "iso85",   53 },
	{                  "iso86",   54 },
	{                  "iso87",   55 },
	{                  "iso88",   56 },
	{               "iso88591",    0 },
	{              "iso885915",   48 },
	{               "iso88592",   50 },
	{               "iso88593",   51 },
	{               "iso88594",   52 },
	{               "iso88595",   53 },
	{               "iso88596",   54 },
	{               "iso88597",   55 },
	{               "iso88598",   56 },
	{               "iso88599",   57 },
	{                  "iso89",   57 },
	{                  "roma8",   83 },
	{                 "roman8",   83 },
	{                   "sjis",   84 },
	{                  "thai8",   61 },
	{                 "tis620",   61 },
	{                   "utf8",    1 },
	{NULL,	0}
};

static const CHARACTER_SET_ALIAS sybase_aliases[] = {
	{           "ascii_8",   0 },
	{              "big5",   5 },
	{            "cp1250",  13 },
	{            "cp1251",  14 },
	{            "cp1252",  15 },
	{            "cp1253",  16 },
	{            "cp1254",  17 },
	{            "cp1255",  18 },
	{            "cp1256",  19 },
	{            "cp1257",  20 },
	{            "cp1258",  21 },
	{             "cp437",  23 },
	{             "cp850",  24 },
	{             "cp862",  25 },
	{             "cp866",  26 },
	{             "cp874",  27 },
	{             "cp932",  28 },
	{             "cp936",  29 },
	{             "cp949",  30 },
	{             "cp950",  31 },
	{            "greek8",  55 },
	{             "iso10",  45 },
	{             "iso13",  46 },
	{             "iso14",  47 },
	{             "iso15",  48 },
	{            "iso646",  88 },
	{          "iso88592",  50 },
	{          "iso88595",  53 },
	{          "iso88596",  54 },
	{          "iso88597",  55 },
	{          "iso88598",  56 },
	{          "iso88599",  57 },
	{             "iso_1",   0 },
	{              "koi8",  65 },
	{               "mac",  69 },
	{           "mac_cyr",  73 },
	{          "macgreek",  74 },
	{           "macthai",  78 },
	{           "macturk",  79 },
	{            "roman8",  83 },
	{              "sjis",  84 },
	{            "tis620",  61 },
	{              "utf8",   1 },
	{NULL,	0}
};
#endif

enum {
	        TDS_CHARSET_ISO_8859_1 =   0,
	             TDS_CHARSET_UTF_8 =   1,
	           TDS_CHARSET_UCS_2LE =   2,
	           TDS_CHARSET_UCS_2BE =   3,
	         TDS_CHARSET_ARMSCII_8 =   4,
	             TDS_CHARSET_BIG_5 =   5,
	        TDS_CHARSET_BIG5_HKSCS =   6,
	               TDS_CHARSET_C99 =   7,
	           TDS_CHARSET_CHINESE =   8,
	                TDS_CHARSET_CN =   9,
	             TDS_CHARSET_CN_GB =  10,
	    TDS_CHARSET_CN_GB_ISOIR165 =  11,
	            TDS_CHARSET_CP1133 =  12,
	            TDS_CHARSET_CP1250 =  13,
	            TDS_CHARSET_CP1251 =  14,
	            TDS_CHARSET_CP1252 =  15,
	            TDS_CHARSET_CP1253 =  16,
	            TDS_CHARSET_CP1254 =  17,
	            TDS_CHARSET_CP1255 =  18,
	            TDS_CHARSET_CP1256 =  19,
	            TDS_CHARSET_CP1257 =  20,
	            TDS_CHARSET_CP1258 =  21,
	            TDS_CHARSET_CP1361 =  22,
	             TDS_CHARSET_CP437 =  23,
	             TDS_CHARSET_CP850 =  24,
	             TDS_CHARSET_CP862 =  25,
	             TDS_CHARSET_CP866 =  26,
	             TDS_CHARSET_CP874 =  27,
	             TDS_CHARSET_CP932 =  28,
	             TDS_CHARSET_CP936 =  29,
	             TDS_CHARSET_CP949 =  30,
	             TDS_CHARSET_CP950 =  31,
	            TDS_CHARSET_EUC_JP =  32,
	            TDS_CHARSET_EUC_KR =  33,
	            TDS_CHARSET_EUC_TW =  34,
	           TDS_CHARSET_GB18030 =  35,
	  TDS_CHARSET_GEORGIAN_ACADEMY =  36,
	       TDS_CHARSET_GEORGIAN_PS =  37,
	                TDS_CHARSET_HZ =  38,
	       TDS_CHARSET_ISO_2022_CN =  39,
	   TDS_CHARSET_ISO_2022_CN_EXT =  40,
	       TDS_CHARSET_ISO_2022_JP =  41,
	     TDS_CHARSET_ISO_2022_JP_1 =  42,
	     TDS_CHARSET_ISO_2022_JP_2 =  43,
	       TDS_CHARSET_ISO_2022_KR =  44,
	       TDS_CHARSET_ISO_8859_10 =  45,
	       TDS_CHARSET_ISO_8859_13 =  46,
	       TDS_CHARSET_ISO_8859_14 =  47,
	       TDS_CHARSET_ISO_8859_15 =  48,
	       TDS_CHARSET_ISO_8859_16 =  49,
	        TDS_CHARSET_ISO_8859_2 =  50,
	        TDS_CHARSET_ISO_8859_3 =  51,
	        TDS_CHARSET_ISO_8859_4 =  52,
	        TDS_CHARSET_ISO_8859_5 =  53,
	        TDS_CHARSET_ISO_8859_6 =  54,
	        TDS_CHARSET_ISO_8859_7 =  55,
	        TDS_CHARSET_ISO_8859_8 =  56,
	        TDS_CHARSET_ISO_8859_9 =  57,
	         TDS_CHARSET_ISO_IR_14 =  58,
	        TDS_CHARSET_ISO_IR_149 =  59,
	        TDS_CHARSET_ISO_IR_159 =  60,
	        TDS_CHARSET_ISO_IR_166 =  61,
	         TDS_CHARSET_ISO_IR_87 =  62,
	              TDS_CHARSET_JAVA =  63,
	     TDS_CHARSET_JISX0201_1976 =  64,
	            TDS_CHARSET_KOI8_R =  65,
	           TDS_CHARSET_KOI8_RU =  66,
	            TDS_CHARSET_KOI8_T =  67,
	            TDS_CHARSET_KOI8_U =  68,
	               TDS_CHARSET_MAC =  69,
	         TDS_CHARSET_MACARABIC =  70,
	  TDS_CHARSET_MACCENTRALEUROPE =  71,
	       TDS_CHARSET_MACCROATIAN =  72,
	       TDS_CHARSET_MACCYRILLIC =  73,
	          TDS_CHARSET_MACGREEK =  74,
	         TDS_CHARSET_MACHEBREW =  75,
	        TDS_CHARSET_MACICELAND =  76,
	        TDS_CHARSET_MACROMANIA =  77,
	           TDS_CHARSET_MACTHAI =  78,
	        TDS_CHARSET_MACTURKISH =  79,
	        TDS_CHARSET_MACUKRAINE =  80,
	         TDS_CHARSET_MULELAO_1 =  81,
	          TDS_CHARSET_NEXTSTEP =  82,
	            TDS_CHARSET_ROMAN8 =  83,
	              TDS_CHARSET_SJIS =  84,
	              TDS_CHARSET_TCVN =  85,
	           TDS_CHARSET_UCS_4BE =  86,
	           TDS_CHARSET_UCS_4LE =  87,
	          TDS_CHARSET_US_ASCII =  88,
	          TDS_CHARSET_UTF_16BE =  89,
	          TDS_CHARSET_UTF_16LE =  90,
	          TDS_CHARSET_UTF_32BE =  91,
	          TDS_CHARSET_UTF_32LE =  92,
	             TDS_CHARSET_UTF_7 =  93,
	            TDS_CHARSET_VISCII =  94,
	              TDS_NUM_CHARSETS =  95
};

