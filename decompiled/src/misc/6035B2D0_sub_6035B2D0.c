/* sub_6035B2D0
 * address: 0x6035B2D0   size: 708   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6035B2D0(_WORD *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  int v6; // r5
  int owner; // r6
  StateBase *CurrentState; // r0
  int v9; // r4
  float Bottom; // s16
  char v11; // r12
  bool v12; // zf
  int v13; // r0
  bool v14; // zf

  v6 = 0;
  owner = (int)FIELD_U32(a3, 0x40);
  if ( owner )
  {
    if ( !sub_602A588C((int)a1) )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 3042));
      v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v9 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
      {
        Bottom = ActiveCollider_getBottom(a3);
        if ( Bottom > ActiveCollider_getCenterY(a2) )
        {
          if ( ((unsigned int)&dword_60C7B37C & ~(1614132076 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
          {
            dword_60C7B378 = (int)&off_60BC00BC;
            _cxa_guard_release(&dword_60C7B37C);
          }
          if ( (**(int (__fastcall ***)(int, int *))owner)(owner, &dword_60C7B378) == 1 )
          {
            v12 = (FIELD_U8(owner, 1235) & 0x20) == 0;
            if ( (FIELD_U8(owner, 1235) & 0x20) == 0 )
              v12 = (FIELD_U8(owner, 1217) & 0x10) == 0;
            if ( v12 && (FIELD_U8(owner, 6900) & 1) == 0 )
            {
              if ( FIELD_U32(a3, 0x74).field_14 != 2 )
              {
                v13 = sub_6075F914(owner);
                v14 = v13 == 1;
                if ( v13 == 1 )
                  v14 = (FIELD_U8(owner, 1210) & 1) == 0;
                if ( v14 )
                {
                  (*(void (__fastcall **)(_WORD *, int))(*(_DWORD *)a1 + 388))(a1, owner);
                  (*(void (__fastcall **)(_WORD *))(*(_DWORD *)a1 + 404))(a1);
                  (*(void (__fastcall **)(_WORD *, int))(*(_DWORD *)a1 + 408))(a1, owner);
                }
                else
                {
                  if ( (FIELD_U8(owner, 1212) & 0x40) == 0 )
                  {
                    (*(void (__fastcall **)(_WORD *, int))(*(_DWORD *)a1 + 392))(a1, owner);
                    (*(void (__fastcall **)(_WORD *, int))(*(_DWORD *)a1 + 396))(a1, owner);
                    (*(void (__fastcall **)(_WORD *, int))(*(_DWORD *)a1 + 372))(a1, owner);
                    (*(void (__fastcall **)(_WORD *, int))(*(_DWORD *)a1 + 376))(a1, owner);
                    v6 = 1;
                    (*(void (__fastcall **)(_WORD *, int, ActiveCollider *, ActiveCollider *))(*(_DWORD *)a1 + 704))(
                      a1,
                      1,
                      a2,
                      a3);
                    return v6;
                  }
                  (*(void (__fastcall **)(_WORD *, int))(*(_DWORD *)a1 + 400))(a1, owner);
                  sub_602A3124((int)a1, owner);
                  (*(void (__fastcall **)(_WORD *, int))(*(_DWORD *)a1 + 372))(a1, owner);
                  sub_602A3160(a1);
                  (*(void (__fastcall **)(_WORD *, int, ActiveCollider *, ActiveCollider *))(*(_DWORD *)a1 + 704))(
                    a1,
                    3,
                    a2,
                    a3);
                }
                return 1;
              }
              (*(void (__fastcall **)(_WORD *, int))(*(_DWORD *)a1 + 412))(a1, owner);
              (*(void (__fastcall **)(_WORD *, int))(*(_DWORD *)a1 + 380))(a1, owner);
              (*(void (__fastcall **)(_WORD *, int))(*(_DWORD *)a1 + 384))(a1, owner);
              Enemy_killYoshi((int)a1, owner);
              v6 = 1;
              FIELD_U8(a2, 0x6E) |= 2u;
            }
          }
        }
      }
    }
  }
  return v6;
}
