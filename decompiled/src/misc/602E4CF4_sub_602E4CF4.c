/* sub_602E4CF4
 * address: 0x602E4CF4   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E4CF4(int a1, int a2, float a3)
{
  char v3; // r12
  int (__fastcall ***v7)(_DWORD, int *); // r7
  int v8; // r6
  int (__fastcall ***v9)(_DWORD, int *); // r7
  int v10; // r4
  int v11; // r5
  bool v12; // zf
  int v13; // r0

  v7 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 64);
  if ( ((unsigned int)dword_60C922C8 & ~(1613647132 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C922C8) )
  {
    dword_60C922C4 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C922C8);
  }
  if ( v7 )
  {
    v8 = (**v7)(v7, &dword_60C922C4);
    if ( v8 )
      v8 = (int)v7;
  }
  else
  {
    v8 = 0;
  }
  v9 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C7B37C & ~(1613647264 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  v10 = 0;
  if ( v9 )
  {
    v11 = (**v9)(v9, &dword_60C7B378);
    if ( v11 )
      v11 = (int)v9;
    if ( a3 > 0.0 )
    {
      v12 = v8 == 0;
      if ( v8 )
        v12 = v11 == 0;
      if ( !v12 )
      {
        v13 = sub_607B7028(v11);
        if ( !v13 )
          v13 = v11;
        FIELD_F32(v13, 1300) = FIELD_F32(v13, 1300) + 0.0;
        FIELD_F32(v13, 1304) = FIELD_F32(v13, 1304) + (float)(a3 * -2.0);
        FIELD_F32(v13, 1308) = FIELD_F32(v13, 1308) + 0.0;
        FIELD_U32(v13, 124) = 0;
        SE_EMY_IBARAMUSHI_KNOCK_UP_ref_2(a1, a2);
        return 1;
      }
    }
  }
  return v10;
}
