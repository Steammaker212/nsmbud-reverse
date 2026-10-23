/* sub_601D1724
 * address: 0x601D1724   size: 676   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D1724(int a1)
{
  unsigned int v1; // r4
  int v2; // r6
  char v3; // r12
  int v4; // r8
  int (__fastcall ***v5)(_DWORD, int *); // r7
  unsigned int v6; // r0
  int v7; // r6
  char v8; // r12
  int v9; // r5
  int (__fastcall ***v10)(_DWORD, int *); // r7
  unsigned int v11; // r0
  int *v12; // r1
  int v14; // [sp+10h] [bp-78h] BYREF
  int v15; // [sp+14h] [bp-74h]
  _DWORD v16[28]; // [sp+18h] [bp-70h] BYREF

  v1 = 0;
  FIELD_U8(dword_60CC6D78, 120) ^= 1u;
  sub_6018642C(a1, 91, 0, 0);
  v14 = 0;
  memset(v16, 0, 72);
  sub_601905DC(&v14);
  v14 = 37;
  v15 = sub_601916C8(dword_60C8996C, 37);
  v2 = sub_601693A0(881);
  v4 = FIELD_U32(ActorMgr__instance, 27180);
  do
  {
    v5 = *(int (__fastcall ****)(_DWORD, int *))v2;
    if ( ((unsigned int)&dword_60C8AF38 & ~(1612519436 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8AF38) )
    {
      dword_60C8AF34 = (int)&off_60BD4E08;
      _cxa_guard_release(&dword_60C8AF38);
    }
    if ( v5 && (**v5)(v5, &dword_60C8AF34) == 1 )
    {
      v6 = 0;
      if ( v1 < 0x12 )
        v6 = v1;
      ++v1;
      v16[v6] = *(_DWORD *)(*(_DWORD *)v2 + 8);
    }
    v2 = sub_601693C0(881, v2 + 4);
  }
  while ( v2 != v4 );
  v7 = sub_601693A0(882);
  v9 = FIELD_U32(ActorMgr__instance, 27180);
  do
  {
    v10 = *(int (__fastcall ****)(_DWORD, int *))v7;
    if ( ((unsigned int)&dword_60C8AF40 & ~(1612519692 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C8AF40) )
    {
      dword_60C8AF3C = (int)&off_60BD4E08;
      _cxa_guard_release(&dword_60C8AF40);
    }
    if ( v10 && (**v10)(v10, &dword_60C8AF3C) == 1 )
    {
      v11 = v1 + 1;
      if ( v1 >= 0x12 )
        v1 = 0;
      v12 = &v14 + v1;
      v1 = v11;
      v12[2] = *(_DWORD *)(*(_DWORD *)v7 + 8);
    }
    v7 = sub_601693C0(882, v7 + 4);
  }
  while ( v7 != v9 );
  v14 = 37;
  v15 = sub_601916C8(dword_60C8996C, 37);
  return sub_60191160((_DWORD *)dword_60C8996C, &v14);
}
