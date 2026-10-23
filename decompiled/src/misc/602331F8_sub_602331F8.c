/* sub_602331F8
 * address: 0x602331F8   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602331F8(int a1)
{
  char v2; // r12
  int v3; // r0
  int v4; // r6
  int result; // r0
  int v6; // r5
  int v7; // r0
  float v8; // s0

  sub_60232B58(a1);
  v3 = FIELD_U32(a1, 436);
  v4 = 0;
  if ( v3 )
  {
    if ( FIELD_S32(v3, 124) >= 1 )
    {
      v4 = 1;
      if ( (FIELD_U8(dword_60CBFA90, 60) & 2) != 0 )
        sub_60234420();
    }
  }
  result = FIELD_U32(dword_60C99DD4, 764);
  if ( result != 3 )
  {
    v6 = FIELD_U32(dword_60C995D0, 32);
    if ( !v6 )
      goto LABEL_13;
    if ( ((unsigned int)&dword_60C8D914 & ~(1612919428 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D914) )
    {
      dword_60C8D910 = (int)&off_60BD94B0;
      _cxa_guard_release(&dword_60C8D914);
    }
    if ( (*(int (__fastcall **)(int, int *))(*(_DWORD *)v6 + 8))(v6, &dword_60C8D910)
      || (result = dword_60C96478) != 0 && (result = sub_60377E2C(), result == 1) )
    {
LABEL_13:
      ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 420));
      ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 420));
      v7 = FIELD_U32(a1, 428);
      v8 = FIELD_F32(a1, 4576) + FIELD_F32(v7, 352);
      FIELD_F32(a1, 4576) = v8;
      FIELD_F32(a1, 4580) = FIELD_F32(a1, 4580) + FIELD_F32(v7, 356);
      FIELD_F32(a1, 4576) = fmodf(v8 + 1.0, 1.0);
      FIELD_F32(a1, 4580) = fmodf(FIELD_F32(a1, 4580) + 1.0, 1.0);
      sub_60931064(a1 + 488, a1 + 4576);
      result = FIELD_U32(a1, 432);
      if ( FIELD_S32(result, 32) >= 1 )
        result = sub_602311CC(result);
      if ( v4 == 1 )
        return sub_602342AC(FIELD_U32(a1, 436), 0, a1 + 80, a1 + 168);
    }
  }
  return result;
}
