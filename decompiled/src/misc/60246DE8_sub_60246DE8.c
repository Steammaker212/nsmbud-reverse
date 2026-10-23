/* sub_60246DE8
 * address: 0x60246DE8   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60246DE8(int a1)
{
  char v2; // r12
  int v3; // r5
  int v4; // r0
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r6
  int v8; // r0
  bool v9; // zf

  v3 = 0;
  if ( sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66)) >= 1 )
  {
    v4 = FIELD_S8(a1, 6324);
    if ( (unsigned __int8)v4 == 255 )
      goto LABEL_6;
    v3 = 0;
    if ( (unsigned __int8)v4 >= 4u )
      v4 = 0;
    if ( !(*(int (__fastcall **)(_DWORD))(**(_DWORD **)(PlayerMgr_instance + 4 * v4 + 32) + 636))(*(_DWORD *)(PlayerMgr_instance + 4 * v4 + 32)) )
    {
LABEL_6:
      v3 = 0;
      if ( FIELD_U32(a1, 6320) != 1 )
      {
        v5 = 0;
        v3 = 0;
        v6 = FIELD_U8(a1, 6314);
        if ( v6 < 4 )
          v5 = (char)v6;
        v7 = *(_DWORD *)(PlayerMgr_instance + 4 * v5 + 32);
        if ( ((unsigned int)&dword_60C7B37C & ~(1613000360 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        if ( v7 )
        {
          v8 = (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7B378);
          v9 = v8 == 1;
          if ( v8 == 1 )
            v9 = (FIELD_U8(v7, 1219) & 8) == 0;
          if ( v9 )
          {
            SE_PLY_BALLOON_BRAKE_ref(a1, 0);
            return 1;
          }
        }
      }
    }
  }
  return v3;
}
