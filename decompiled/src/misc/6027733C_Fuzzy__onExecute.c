/* Fuzzy__onExecute
 * address: 0x6027733C   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F3C
// 
// Overridden by: None
signed int __fastcall Fuzzy__onExecute(int a1)
{
  char v2; // r12
  unsigned int v3; // r1
  unsigned int *v4; // r6
  int (__fastcall ***v5)(_DWORD, int *); // r5
  float v6; // s0
  int v7; // r0
  StageActor *v8; // r0
  int v9; // r1
  int v10; // r0
  int v12; // [sp+4h] [bp-1Ch] BYREF
  float v13; // [sp+8h] [bp-18h]
  int v14; // [sp+Ch] [bp-14h]

  StateMgr__execute((StateMgr *)(a1 + 0x17C4));
  v4 = (unsigned int *)(a1 + 0x197C);
  v3 = FIELD_U32(a1, 0x197C);
  if ( v3 )
  {
    v5 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
    if ( !v5 )
      *v4 = 0;
  }
  else
  {
    v5 = 0;
  }
  if ( ((unsigned int)&dword_60C8EDDC & ~(1613198248 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8EDDC) )
  {
    dword_60C8EDD8 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C8EDDC);
  }
  if ( v5 && (**v5)(v5, &dword_60C8EDD8) == 1 )
  {
    v6 = FIELD_F32(a1, 112);
    v12 = FIELD_U32(a1, 108);
    v13 = v6 + -8.0;
    sub_605ED0DC((int)v5, (int)&v12);
  }
  if ( !FIELD_U8(a1, 23) )
  {
    if ( *v4 )
    {
      v7 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *v4);
      if ( v7 )
      {
        if ( sub_605ED718(v7) != 1 )
          goto LABEL_22;
      }
      else
      {
        *v4 = 0;
      }
    }
    v8 = (StageActor *)a1;
    v9 = 0;
    goto LABEL_21;
  }
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    v8 = (StageActor *)a1;
    v9 = 4;
LABEL_21:
    StageActor__cullCheck(v8, v9);
  }
LABEL_22:
  sub_602A33AC((_BYTE *)a1);
  if ( !StageActor__isOffScreen((StageActor *)a1) )
  {
    sub_60277540(a1);
    if ( sub_60276E10(a1) )
    {
      v10 = FIELD_U32(a1, 6544);
      v12 = 0;
      v13 = 0.0;
      v14 = v10;
      EffectData_create(1106, (Vec3 *)(a1 + 6532), (int)&v12, 0);
    }
  }
  return 1;
}
