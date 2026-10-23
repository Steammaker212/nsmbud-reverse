/* sub_60689274
 * address: 0x60689274   size: 920   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sub_60689274(unsigned int *a1)
{
  int (__fastcall ***v2)(_DWORD, int *); // r5
  char v3; // r12
  int v4; // r6
  int v5; // r7
  signed int v6; // r5
  signed int v7; // r4
  int v8; // r0
  char v9; // r12
  int v10; // r10
  int v11; // r9
  int v12; // r8
  float v13; // s16
  int v14; // r0
  unsigned int *result; // r0
  char v16; // r12
  int v17; // r7
  char v18; // r12
  StateBase *CurrentState; // r0
  int v20; // r6

  v2 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[1]);
  if ( ((unsigned int)&dword_60CB849C & ~(1617466036 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CB849C) )
  {
    dword_60CB8498 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60CB849C);
  }
  v4 = 0;
  v5 = 0;
  if ( v2 )
  {
    v5 = (**v2)(v2, &dword_60CB8498);
    if ( v5 )
      v5 = (int)v2;
  }
  v6 = a1[2];
  v7 = FIELD_U32(v5, 156);
  if ( v7 < v6 )
    v4 = -65536;
  v8 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *a1);
  v10 = v8;
  if ( !v8 )
    return sub_60689128(a1);
  v11 = v8;
  if ( fabsf(FIELD_F32(v8, 108) - FIELD_F32(v5, 108)) > FIELD_F32(v5, 6448) )
    goto LABEL_11;
  if ( FIELD_F32(v8, 124) > 0.0 )
    return sub_60689128(a1);
  v12 = v4 - v6 + v7;
  v13 = FIELD_F32(v5, 112)
      + (float)((float)(*(float *)((char *)&sinLutTable[2] + (((unsigned int)v12 >> 20) & 0xFF0))
                      + (float)((float)((float)(v12 & 0xFFFFFF)
                                      * *(float *)((char *)&sinLutTable[3] + (((unsigned int)v12 >> 20) & 0xFF0)))
                              * 0.000000059605))
              * 32.0);
  if ( (unsigned __int8)(FIELD_U8(v8, 533) - 1) <= 1u )
  {
    if ( ((unsigned int)&dword_60C7B37C & ~(1617466408 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    v14 = (**(int (__fastcall ***)(int, int *))v10)(v10, &dword_60C7B378);
    if ( v14 )
      v14 = v10;
    result = (unsigned int *)sub_607600F4(v14, v13);
    goto LABEL_22;
  }
  if ( (*(_BYTE *)((*(int (__fastcall **)(int))(*(_DWORD *)v8 + 80))(v8) + 2224) & 1) != 0 )
    return sub_60689128(a1);
  FIELD_F32(v10, 112) = v13;
  if ( ((unsigned int)&dword_60C7B410 & ~(1617466576 << v16) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B410) )
  {
    dword_60C7B40C = (int)&off_60BC00D4;
    _cxa_guard_release(&dword_60C7B410);
  }
  v17 = (**(int (__fastcall ***)(int, int *))v10)(v10, &dword_60C7B40C);
  if ( v17 )
    v17 = v10;
  if ( ((unsigned int)&dword_60C803F8 & ~(1617466688 << v18) & 1) == 0 && _cxa_guard_acquire(&dword_60C803F8) )
  {
    CarryableEnemy_RTTI = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C803F8);
  }
  result = (unsigned int *)(**(int (__fastcall ***)(int, int *))v10)(v10, &CarryableEnemy_RTTI);
  if ( !result )
    v10 = 0;
  if ( v17 )
  {
    result = (unsigned int *)sub_605DBD64(v17);
    if ( result != (unsigned int *)1 )
      goto LABEL_22;
    return sub_60689128(a1);
  }
  if ( v10 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v10 + 6084));
    v20 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    result = (unsigned int *)(*((int (**)(void))stru_60C8EA70._.vtable + 2))();
    if ( (unsigned int *)v20 == result )
      return sub_60689128(a1);
  }
LABEL_22:
  if ( v12 >= 1073741825 )
  {
LABEL_11:
    if ( (unsigned __int8)(FIELD_U8(v11, 533) - 1) >= 2u )
      FIELD_U32(v11, 124) = 0;
    return sub_60689128(a1);
  }
  return result;
}
