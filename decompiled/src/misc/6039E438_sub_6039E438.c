/* sub_6039E438
 * address: 0x6039E438   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039E438(int a1)
{
  StateMgr__changeState((StateMgr *)(a1 + 6496), (StateBase *)&dword_60C96590);
  FIELD_U32(dword_60C96478, 100) = 2;
  FIELD_U32(a1, 344) = sub_6039B8A0;
  FIELD_U32(a1, 6764) = sub_6039C3B0;
  FIELD_U32(a1, 7068) = sub_6039C478;
  FIELD_U32(a1, 80) = *(float *)(sub_60378E30(a1 + 6444) + 16) < FIELD_F32(a1, 108);
  FIELD_U16(a1, 6338) = 180;
  sub_607FE8D0(
    dword_60CC6484 + 248,
    60,
    FIELD_F32(dword_60CC6484, 16),
    FIELD_F32(dword_60CC6484, 116),
    FIELD_F32(dword_60CC6484, 128));
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C971A0);
  FIELD_U8(a1, 13300) = 0;
  return 13300;
}
