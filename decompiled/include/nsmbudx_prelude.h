/* NSMBU Deluxe (Switch) v1.0.0 -- decompilation prelude
 *
 * Included by every generated .c file. It pulls in the shared type vocabulary, the
 * recovered struct layouts, and every prototype, so a single-function translation unit has
 * declarations for everything it references.
 *
 * There is no include cycle: the prototype headers include nsmbudx_types.h, never this file.
 *
 * Do not edit by hand. Regenerate with scripts/restructure_includes.py.
 */
#ifndef NSMBUDX_PRELUDE_H
#define NSMBUDX_PRELUDE_H

#include "nsmbudx_types.h"

/* Incomplete types for C++-qualified names. These MUST precede the prototype headers below: if a
   header mentions `struct nn_oe *` before the struct is declared, C creates a NEW type scoped to
   that prototype, and every later `struct nn_oe *` is a different type. */
struct nn_audio_PerformanceInfo;
struct nn_detail;
struct nn_diag;
struct nn_fontll_ScalableFontEngine;
struct nn_fs;
struct nn_g3d_ShapeAnimObj;
struct nn_hid;
struct nn_hid_VibrationNode;
struct nn_hid_VibrationNodeConnection;
struct nn_lmem;
struct nn_mem_StandardAllocator;
struct nn_mii;
struct nn_mii_Database;
struct nn_mii_detail_BufferAllocator;
struct nn_mii_detail_CalculateSizeAndAlignment;
struct nn_oe;
struct nn_os;
struct nn_prepo_PlayReport;
struct nn_time;
struct nn_util;
struct nn_util_BinaryFileHeader;
struct nn_util_RelocationTable;
struct nn_vi;
struct sead_CalculateTask;
struct sead_CriticalSection;
struct sead_FileDeviceMgr;
struct sead_ListNode;
struct sead_MethodTreeNode;
struct sead_Random;
struct sead_TaskBase;
struct sead_TaskMgr;
struct sead_ThreadUtil;

/* Incomplete types for C++-qualified names. These MUST precede the prototype headers below: if a
   header mentions `struct nn_oe *` before the struct is declared, C creates a NEW type scoped to
   that prototype, and every later `struct nn_oe *` is a different type. */

/* Incomplete types for C++-qualified names. These MUST precede the prototype headers below: if a
   header mentions `struct nn_oe *` before the struct is declared, C creates a NEW type scoped to
   that prototype, and every later `struct nn_oe *` is a different type. */

/* Incomplete types for C++-qualified names. These MUST precede the prototype headers below: if a
   header mentions `struct nn_oe *` before the struct is declared, C creates a NEW type scoped to
   that prototype, and every later `struct nn_oe *` is a different type. */
#include "nsmbudx_neon.h"
#include "nsmbudx_data_symbols.h"
#include "structs.h"
#include "nsmbudx_recovered_types.h"
#include "nsmbudx_data.h"
#include "nsmbudx_subfuncs.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_string_symbols.h"

#include "libs.h"

/* additional opaque qualified names used by the corpus */

#endif /* NSMBUDX_PRELUDE_H */
