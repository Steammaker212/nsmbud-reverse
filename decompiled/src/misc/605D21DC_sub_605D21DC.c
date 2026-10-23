/* sub_605D21DC
 * address: 0x605D21DC   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605D21DC(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  char v5; // r12
  int v6; // r5
  int v7; // r7
  int v8; // r0
  int v9; // r6
  int v10; // r0
  int v11; // r5

  v3 = FIELD_U32(a1, 64);
  if ( ((unsigned int)&dword_60CB1204 & ~(1616716280 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB1204) )
  {
    dword_60CB1200 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB1204);
  }
  if ( v3 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CB1200) == 1 && FIELD_U8(v3, 6976) == 255 )
    {
      v6 = FIELD_U32(a2, 64);
      v7 = FIELD_U8(v6, 84);
      if ( v7 != 255 )
      {
        v8 = FIELD_U8(v6, 533);
        if ( (unsigned int)(v8 - 1) <= 1 )
        {
          if ( v8 != 1 )
          {
            if ( ((unsigned int)&dword_60C7B408 & ~(1616716584 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
            {
              dword_60C7B404 = (int)&off_60BC00B0;
              _cxa_guard_release(&dword_60C7B408);
            }
            v10 = (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B404);
            if ( v10 )
              v10 = v6;
            v9 = sub_607D6C28(v10);
            if ( !v9 )
            {
              v11 = 0;
LABEL_27:
              SE_SYS_MID_POINT_ref(v3, (char)v7, v11);
              StateMgr__changeState((StateMgr *)(v3 + 6084), (StateBase *)&dword_60CB11E0);
              return;
            }
LABEL_24:
            v11 = 0;
            if ( !FIELD_U32(v9, 1320) )
            {
              v11 = 1;
              sub_607A27A8(v9, 1);
              sub_607AA6F4(v9);
            }
            sub_607AA68C(v9);
            goto LABEL_27;
          }
          if ( ((unsigned int)&dword_60C7B374 & ~(1616716456 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
          {
            dword_60C7B370 = (int)&off_60BC00B0;
            _cxa_guard_release(&dword_60C7B374);
          }
          v9 = (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B370);
          if ( v9 )
            v9 = v6;
          if ( (FIELD_U8(v9, 1217) & 0x10) == 0 )
            goto LABEL_24;
        }
      }
    }
  }
}
