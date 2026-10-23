/* sub_60424300
 * address: 0x60424300   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60424300(
        int result,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8)
{
  int v8; // r1
  int v9; // lr
  int v10; // r2

  FIELD_U8(result, 64) = 1;
  if ( a2 )
  {
    FIELD_U32(result, 8) = *a2;
    FIELD_U32(result, 12) = a2[1];
    FIELD_U32(result, 16) = a2[2];
  }
  if ( a3 )
    FIELD_U32(result, 20) = *a3;
  if ( a4 )
    FIELD_U32(result, 24) = *a4;
  if ( a5 )
    FIELD_U32(result, 28) = *a5;
  if ( a6 )
  {
    FIELD_U8(result, 32) = 1;
    v8 = a6[1];
    v9 = a6[2];
    v10 = a6[3];
    FIELD_U32(result, 36) = *a6;
    FIELD_U32(result, 40) = v8;
    FIELD_U32(result, 44) = v9;
    FIELD_U32(result, 48) = v10;
  }
  if ( a7 )
  {
    FIELD_U8(result, 52) = 1;
    FIELD_U32(result, 56) = *a7;
  }
  if ( a8 )
    FIELD_U32(result, 60) = *a8;
  return result;
}
