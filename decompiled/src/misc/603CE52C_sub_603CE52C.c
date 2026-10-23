/* sub_603CE52C
 * address: 0x603CE52C   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603CE52C(int a1)
{
  int v3; // r5
  char v4; // r12
  int v5; // r0
  __int16 v6; // r1
  int v7; // r0
  _WORD *v8; // r5
  bool v9; // zf
  __int16 v10; // r0

  if ( FIELD_U8(a1, 536) )
    return 1;
  v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 660));
  if ( v3 )
  {
    if ( sub_603CE6CC(a1) )
      return 1;
    if ( ((unsigned int)dword_60C90FA4 & ~(1614603664 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60C90FA4) )
    {
      dword_60C90FA0 = (int)&off_60BC04AC;
      _cxa_guard_release(dword_60C90FA4);
    }
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C90FA0) != 1 )
      return 1;
    FIELD_U8(v3, 6318) |= 8u;
    v5 = FIELD_U32(a1, 20);
    if ( (v5 & 0x1000000) == 0 || (v6 = 64, !FIELD_U8(dword_60CC6D8C, 17)) )
      v6 = 30 * BYTE1(v5) + 30;
    FIELD_U16(a1, 664) = v6;
    return 1;
  }
  else
  {
    FIELD_U32(a1, 660) = 0;
    if ( sub_603CE6CC(a1) != 1 )
      return 1;
    v8 = (_WORD *)(a1 + 664);
    v7 = FIELD_U16(a1, 664);
    v9 = v7 == 0;
    if ( FIELD_U16(a1, 664) )
    {
      v10 = v7 - 1;
      *v8 = v10;
      v9 = v10 == 0;
    }
    if ( !v9 )
      return 1;
    FIELD_U32(a1, 660) = ((int (__fastcall *)(int))loc_603CE860)(a1);
    *v8 = 30 * (unsigned __int8)BYTE1(FIELD_U32(a1, 20)) + 30;
    return 1;
  }
}
