/* sub_601D1C5C
 * address: 0x601D1C5C   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D1C5C(int a1, int a2)
{
  int (__fastcall ****v3)(_DWORD, int *); // r7
  char v4; // r12
  int result; // r0
  int (__fastcall ****v6)(_DWORD, int *); // r8
  int v7; // r11
  int (__fastcall ***v8)(_DWORD, int *); // r4
  int v9; // r0
  unsigned int v10; // r1
  int v11; // r0
  int v12; // r1
  _DWORD v13[30]; // [sp+18h] [bp-78h] BYREF

  sub_6022D5C8(dword_60C8D864);
  v13[0] = 0;
  memset(&v13[2], 0, 72);
  sub_601905DC(v13);
  v3 = (int (__fastcall ****)(_DWORD, int *))sub_60008598(
                                               ActorMgr__instance,
                                               895,
                                               FIELD_U32(ActorMgr__instance, 27172));
  result = ActorMgr__instance;
  v6 = *(int (__fastcall *****)(_DWORD, int *))(ActorMgr__instance + 27180);
  if ( v3 != v6 )
  {
    v7 = 0;
    do
    {
      v8 = *v3;
      if ( ((unsigned int)&dword_60C8AF48 & ~(1612520760 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C8AF48) )
      {
        dword_60C8AF44 = (int)&off_60BD4E08;
        _cxa_guard_release(&dword_60C8AF48);
      }
      if ( v8 )
      {
        v9 = (**v8)(v8, &dword_60C8AF44);
        if ( v9 )
          v9 = (int)v8;
      }
      else
      {
        v9 = 0;
      }
      if ( FIELD_U8(v9, 280) )
      {
        v10 = v7 + 2;
        v11 = FIELD_U32(v9, 8);
        ++v7;
        if ( v10 >= 0x12 )
          v10 = 0;
        v13[v10 + 2] = v11;
      }
      v3 = (int (__fastcall ****)(_DWORD, int *))sub_60008598(ActorMgr__instance, 895, (int)(v3 + 1));
    }
    while ( v3 != v6 );
    result = a2;
    if ( v7 )
    {
      v12 = 82;
      if ( a2 )
        v12 = 83;
      v13[0] = v12;
      v13[1] = sub_601916C8(dword_60C8996C, v12);
      return sub_60191160((_DWORD *)dword_60C8996C, v13);
    }
  }
  return result;
}
