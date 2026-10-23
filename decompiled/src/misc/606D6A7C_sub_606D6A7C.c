/* sub_606D6A7C
 * address: 0x606D6A7C   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606D6A7C(int a1, int a2)
{
  int v2; // r6
  char v3; // r12
  int (__fastcall ***v6)(_DWORD, int *); // r5
  int v7; // r7
  bool v8; // zf
  StateBase *CurrentState; // r0
  int v10; // r5
  int v11; // r0
  unsigned int v12; // r1
  int v13; // r2
  int v14; // r1
  bool v15; // zf
  StateBase *v16; // r0
  int v17; // r5
  StateBase *v18; // r0
  int v19; // r5

  v6 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 64);
  if ( ((unsigned int)&dword_60CBB780 & ~(1617783452 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CBB780) )
  {
    dword_60CBB77C = (int)&off_60BDE360;
    _cxa_guard_release(&dword_60CBB780);
  }
  if ( v6 )
  {
    v7 = (**v6)(v6, &dword_60CBB77C);
    if ( v7 )
      v7 = (int)v6;
    v8 = v7 == 0;
    if ( v7 )
    {
      v2 = FIELD_U32(a2, 64);
      v8 = v2 == 0;
    }
    if ( !v8 )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(v7 + 6084));
      v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v10 == (*(int (**)(void))(dword_60CBB75C + 8))() )
      {
LABEL_11:
        FIELD_U8(a1, 110) |= 2u;
        return;
      }
      v11 = FIELD_U8(v2, 533);
      if ( v11 != 1 )
        goto LABEL_17;
      v12 = FIELD_U8(v2, 84);
      v13 = 0;
      if ( v12 < 4 )
        v13 = (char)v12;
      if ( !*(_WORD *)(v7 + 2 * v13 + 6128) )
      {
LABEL_17:
        v14 = FIELD_U32(v7, 6124);
        if ( (v14 & 4) != 0 )
        {
          v15 = v11 == 3;
          if ( v11 == 3 )
            v15 = FIELD_U32(a1, 140) == 9;
          if ( v15 && (FIELD_U8(a2, 149) & 2) != 0 )
          {
            v18 = StateMgr__getCurrentState((StateMgr *)(v7 + 6084));
            v19 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v18, 0x0) + 2))(v18);
            if ( v19 == (*(int (**)(void))(dword_60CBB75C + 8))() )
              goto LABEL_11;
            goto LABEL_29;
          }
        }
        if ( (v14 & 0x30) != 0 && FIELD_U32(a2, 140) == 9 && (FIELD_U8(a1, 149) & 2) != 0 )
        {
          v16 = StateMgr__getCurrentState((StateMgr *)(v7 + 6084));
          v17 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v16, 0x0) + 2))(v16);
          if ( v17 == (*(int (**)(void))(dword_60CBB75C + 8))() )
            goto LABEL_11;
LABEL_29:
          StateMgr__changeState((StateMgr *)(v7 + 6084), (StateBase *)&dword_60CBB75C);
          goto LABEL_11;
        }
      }
    }
  }
}
