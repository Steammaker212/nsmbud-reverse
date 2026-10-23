/* Enemy__executeState_DieFall
 * address: 0x602A7FF8   size: 224   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x60259750 : Amp
//   - 0x6027845C : Fuzzy
//   - 0x602ADD00 : FireSnake
//   - 0x602D6D3C : SledgeBro
//   - 0x6029EBF8 : Thwomp
//   - 0x60317CD4 : DryBones
//   - 0x6033E2BC : GoombaBase
//   - 0x603DFC20 : RiverPiranha
//   - 0x602663C4 : BrosBase
//   - 0x600789A4 : FinalBowser
//   - 0x600C7160 : Bowser
//   - 0x600CFCA4 : BowserJrBase
//   - 0x603A44B4 : ShellEnemy
//   - 0x60310158 : Kanibo
float __fastcall Enemy__executeState_DieFall(CollisionActor *a1)
{
  char v1; // r12
  int next; // r1
  bool v4; // zf
  char *v5; // r0
  int v6; // r1
  int v7; // r0

  if ( ((unsigned int)&dword_60C907FC[1] & ~(1613398036 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C907FC[1]) )
  {
    dword_60C90804 = 0x1000000;
    dword_60C90808 = -16777216;
    _cxa_guard_release(&dword_60C907FC[1]);
  }
  next = (int)a1[1]._.aCollider.createNode.next;
  v4 = FIELD_U32(a1, 0x50) == next;
  v5 = (char *)&unk_60C907F0 + 4 * next;
  v6 = -201326592;
  if ( v4 )
    v6 = 201326592;
  v7 = *((_DWORD *)v5 + 5);
  if ( v4 )
    v7 = -v7;
  if ( FIELD_U8(a1, 0x17A6) )
    v6 = (int)(float)((float)v6 * 0.5);
  FIELD_U32(a1, 0x9C) += v6;
  FIELD_U32(a1, 0xA0) += v7;
  CollisionActor__handleGravity(a1);
  return CollisionActor__handleSpeed(a1);
}
