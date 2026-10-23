/* sub_6038CFB8
 * address: 0x6038CFB8   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6038CFB8(int a1, int a2, int a3)
{
  char v3; // r12
  int v7; // r6
  int result; // r0
  _BYTE *v9; // r7
  float v10; // r1
  float v11[9]; // [sp+4h] [bp-24h] BYREF

  v7 = FIELD_U32(a3, 64);
  result = FIELD_U8(v7, 533);
  if ( result == 1 )
  {
    v9 = *(_BYTE **)(a2 + 64);
    if ( ((unsigned int)&dword_60C86B48 & ~(1614335984 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B48) )
    {
      dword_60C86B44 = (int)&off_60BD0CA4;
      _cxa_guard_release(&dword_60C86B48);
    }
    if ( v9 )
    {
      if ( (**(int (__fastcall ***)(_BYTE *, int *))v9)(v9, &dword_60C86B44) == 1 )
      {
        v10 = FIELD_F32(v7, 112);
        v11[0] = FIELD_F32(v7, 108);
        v11[1] = v10;
        v11[2] = 4500.0;
        sub_602A38A4((int)v9, v11);
        v9[6692] = 1;
        (*(void (__fastcall **)(_BYTE *, int *))(*(_DWORD *)v9 + 192))(v9, &dword_60C98504);
      }
    }
    return sub_603BF044(a1, a2, a3);
  }
  return result;
}
