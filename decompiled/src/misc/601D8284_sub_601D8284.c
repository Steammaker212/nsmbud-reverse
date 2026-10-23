/* sub_601D8284
 * address: 0x601D8284   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D8284(int a1)
{
  int result; // r0
  int v2; // r11
  int (__fastcall ****v3)(_DWORD, int *); // r5
  char v4; // r12
  int (__fastcall ****v5)(_DWORD, int *); // r9
  int (__fastcall ***v6)(_DWORD, int *); // r6
  int v7; // r0
  int v8; // r1
  bool v9; // zf
  int v10; // [sp+10h] [bp-30h]
  int v11; // [sp+14h] [bp-2Ch]
  _DWORD *v12; // [sp+18h] [bp-28h] BYREF

  result = sub_601E14F8(a1 + 1032, FIELD_U32(a1, 1092), &v12);
  if ( v12 )
  {
    v11 = v12[22];
    v2 = v12[21];
    v10 = v12[24];
    v3 = (int (__fastcall ****)(_DWORD, int *))sub_60008598(
                                                 ActorMgr__instance,
                                                 895,
                                                 *(_DWORD *)(ActorMgr__instance + 27172));
    result = ActorMgr__instance;
    v5 = *(int (__fastcall *****)(_DWORD, int *))(ActorMgr__instance + 27180);
    if ( v3 != v5 )
    {
      do
      {
        v6 = *v3;
        if ( ((unsigned int)&dword_60C8AF48 & ~(1612546908 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C8AF48) )
        {
          dword_60C8AF44 = (int)&off_60BD4E08;
          _cxa_guard_release(&dword_60C8AF48);
        }
        v7 = (**v6)(v6, &dword_60C8AF44);
        if ( v7 )
          v7 = (int)v6;
        if ( FIELD_U32(v7, 240) == v2 )
        {
          v8 = FIELD_U32(v7, 244);
          v9 = v8 == v11;
          if ( v8 == v11 )
            v9 = FIELD_U32(v7, 248) == v10;
          if ( v9 )
          {
            if ( FIELD_U8(v7, 280) )
              sub_60213504(v7, 0);
          }
        }
        result = sub_60008598(ActorMgr__instance, 895, (int)(v3 + 1));
        v3 = (int (__fastcall ****)(_DWORD, int *))result;
      }
      while ( (int (__fastcall ****)(_DWORD, int *))result != v5 );
    }
  }
  return result;
}
