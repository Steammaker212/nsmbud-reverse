/* STRM_BGM_DUMMY_ref
 * address: 0x6080A890   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall STRM_BGM_DUMMY_ref(int a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r0

  result = (_DWORD *)dword_60CC6B0C;
  if ( !dword_60CC6B0C )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x98u, a1, 8);
    result = sead__IDisposer__ctor(v3, a1, 3u);
    *result = off_60C28188;
    dword_60CC6B08 = (int)result;
    result[4] = -1;
    result[5] = "SE_DUMMY";
    result[6] = "SE_DUMMY";
    result[13] = 0;
    result[12] = 0;
    result[11] = 0;
    result[10] = 0;
    result[9] = 0;
    result[8] = 0;
    result[7] = 0;
    result[14] = "SE_DUMMY";
    result[15] = "SE_DUMMY";
    result[16] = 1065353216;
    result[17] = 1065353216;
    *((_BYTE *)result + 72) = 1;
    result[36] = 1065353216;
    result[19] = 0;
    result[20] = 0;
    result[21] = 0;
    result[22] = "STRM_BGM_DUMMY";
    result[25] = 0;
    result[24] = 0;
    result[26] = 1065353216;
    result[28] = 0;
    result[29] = 0;
    *((_BYTE *)result + 120) = 1;
    *((_BYTE *)result + 121) = 0;
    result[31] = -1;
    result[32] = 1;
    result[33] = 1;
    result[34] = 15;
    result[35] = 0;
    dword_60C28730 = -1;
    dword_60C28734 = -1;
    byte_60CC6B20 = 0;
    dword_60CC6B24 = 0;
    byte_60CC6B21 = 0;
    dword_60CC6B28 = 0;
    byte_60CC6B22 = 0;
    byte_60CC6B10 = 0;
    dword_60CC6B0C = (int)result;
  }
  return result;
}
