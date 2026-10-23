/* sub_60249D70
 * address: 0x60249D70   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60249D70(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r1
  int v6; // r7
  int v8; // r5
  _BOOL4 v9; // r8
  int v10; // r6
  char v11; // r12
  int v13[9]; // [sp+4h] [bp-24h] BYREF

  v4 = FIELD_U32(a2, 84);
  v5 = FIELD_U32(a2, 88);
  v6 = 0;
  v13[0] = v4;
  v13[1] = v5;
  v13[2] = 0;
  sub_602A38A4(a1, v13);
  v8 = FIELD_U32(a3, 64);
  v9 = sub_6000ADDC(a1, v8);
  v10 = FIELD_S8(v8, 84);
  if ( ((unsigned int)&dword_60C7B37C & ~(1613012424 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v8 )
  {
    v6 = (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C7B378);
    if ( v6 )
      v6 = v8;
  }
  SE_EMY_DOWN_COMBO_ref(a1, v6);
  sub_602A6024(a1, v9, v10, -1);
  return 1;
}
