/* sub_602C8D28
 * address: 0x602C8D28   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C8D28(int a1, int a2, int a3)
{
  char v3; // r12
  Actor *v7; // r7
  float v8; // r1
  int v9; // r7
  _BOOL4 v10; // r8
  int v11; // r5
  float v13[9]; // [sp+4h] [bp-24h] BYREF

  v7 = *(Actor **)(a2 + 64);
  if ( ((unsigned int)dword_60C7B430 & ~(1613532496 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
  {
    Enemy_RTTI = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C7B430);
  }
  if ( v7
    && (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v7, 0x0))(v7, &Enemy_RTTI) == 1
    && Actor__getProfileId(v7) != 563
    && Actor__getProfileId(v7) != 564 )
  {
    v8 = FIELD_F32(a2, 88);
    v13[0] = FIELD_F32(a2, 84);
    v13[1] = v8;
    v13[2] = 0.0;
    sub_602A38A4(a1, v13);
    v9 = FIELD_U32(a3, 64);
    v10 = sub_6000ADDC(a1, v9);
    v11 = FIELD_S8(v9, 84);
    SE_EMY_KAME_HIT_ref(v9, FIELD_S8(v9, 1314), FIELD_U32(a1, 6292) == 2);
    sub_60022760(0.0, 24.0, dword_60C7F52C, a1, 4u, v11);
    sub_602A6024(a1, v10, v11, -1);
  }
  return 1;
}
