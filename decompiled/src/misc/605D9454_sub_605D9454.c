/* sub_605D9454
 * address: 0x605D9454   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D9454(int a1, int a2, float a3, float a4)
{
  int v8; // r5

  v8 = 0;
  if ( (FIELD_U8(a1, 6804) & 1) != 0
    && (FIELD_U8(a1, 6265) & 0x20) == 0
    && !sub_605DBD64(a1)
    && (FIELD_U16(a1, 6260) & 0x802) == 0 )
  {
    FIELD_U32(a1, 128) = 0;
    FIELD_F32(a1, 120) = a3;
    FIELD_F32(a1, 124) = a4;
    FIELD_U32(a1, 8000) = a2;
    FIELD_U32(a1, 8004) = 0;
    FIELD_U32(a1, 8008) = 0;
    StateMgr__changeState((StateMgr *)(a1 + 6292), &stru_60CB16FC);
    return 1;
  }
  return v8;
}
