/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* "have report event to ABRT" */
#define HAVE_ABRT_REPORT 1

/* "have PCIe AER events collect" */
#define HAVE_AER 1

/* "have ARM events collect" */
#define HAVE_ARM 1

/* "have devlink health events collect" */
#define HAVE_DEVLINK 1

/* "have disk I/O errors collect" */
#define HAVE_DISKERROR 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* "have EXTLOG events collect" */
#define HAVE_EXTLOG 1

/* "have HISI UNKNOWN_SEC events decode" */
#define HAVE_HISI_NS_DECODE 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* "have PCIe MCE events collect" */
#define HAVE_MCE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* "have UNKNOWN_SEC events collect" */
#define HAVE_NON_STANDARD 1

/* "have sqlite3" */
#define HAVE_SQLITE3 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Define the project alias string (name-ver or name-ver-rel). */
/* #undef META_ALIAS */

/* Define the project author. */
/* #undef META_AUTHOR */

/* Define the project release date. */
/* #undef META_DATE */

/* Define the libtool library 'age' version information. */
/* #undef META_LT_AGE */

/* Define the libtool library 'current' version information. */
/* #undef META_LT_CURRENT */

/* Define the libtool library 'revision' version information. */
/* #undef META_LT_REVISION */

/* Define the project name. */
/* #undef META_NAME */

/* Define the project release. */
/* #undef META_RELEASE */

/* Define the project version. */
/* #undef META_VERSION */

/* Name of package */
#define PACKAGE "rasdaemon"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "RASdaemon"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "RASdaemon 0.6.4"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "rasdaemon"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.6.4"

/* rasdaemon db store state dir */
#define RASSTATEDIR "/usr/local/var/lib/rasdaemon"

/* ras events database */
#define RAS_DB_FNAME "ras-mc_event.db"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "0.6.4"
