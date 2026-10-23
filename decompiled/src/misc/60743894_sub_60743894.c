/* sub_60743894
 * address: 0x60743894   size: 724   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60743894(unsigned __int8 *a1)
{
  int v2; // r5
  int v3; // r7
  unsigned int v4; // r0
  unsigned int v5; // r1
  int v6; // r0
  int (__fastcall ***v7)(_DWORD, int *); // r6
  char v8; // r12
  unsigned int v9; // r7
  unsigned int v10; // r0
  unsigned int v11; // r1
  int (__fastcall ***v12)(_DWORD, int *); // r6
  char v13; // r12
  int v14; // r6
  int v15; // r4
  char v16; // r12

  v2 = 0;
  v3 = (3 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32;
  v4 = a1[6114];
  if ( v4 >= 4 )
    v4 = 0;
  v5 = *(_DWORD *)&a1[4 * v4 + 6132];
  v6 = 0;
  if ( v5 )
  {
    v7 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v5);
    if ( ((unsigned int)&dword_60CBE26C & ~(1618229524 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60CBE26C) )
    {
      dword_60CBE268 = (int)&off_60BDBC48;
      _cxa_guard_release(&dword_60CBE26C);
    }
    v6 = 0;
    if ( v7 )
    {
      v6 = (**v7)(v7, &dword_60CBE268);
      if ( v6 )
        v6 = (int)v7;
    }
  }
  FIELD_U16(v6, 8038) = 3 * v3;
  sub_605D79D0(v6, (StateBase *)&dword_60CBE230, 0);
  v9 = (v3 + 1) % 3u;
  v10 = a1[6115];
  if ( v10 >= 4 )
    v10 = 0;
  v11 = *(_DWORD *)&a1[4 * v10 + 6148];
  if ( v11 )
  {
    v12 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v11);
    if ( ((unsigned int)&dword_60CBE26C & ~(1618229764 << v13) & 1) == 0 && _cxa_guard_acquire(&dword_60CBE26C) )
    {
      dword_60CBE268 = (int)&off_60BDBC48;
      _cxa_guard_release(&dword_60CBE26C);
    }
    if ( v12 )
    {
      v2 = (**v12)(v12, &dword_60CBE268);
      if ( v2 )
        v2 = (int)v12;
    }
  }
  v14 = 0;
  FIELD_U16(v2, 8038) = 3 * v9;
  sub_605D79D0(v2, (StateBase *)&dword_60CBE230, 0);
  if ( a1[6116] < 4u )
    v14 = a1[6116];
  v15 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *(_DWORD *)&a1[4 * v14 + 6164]);
  if ( ((unsigned int)&dword_60CBE26C & ~(1618229992 << v16) & 1) == 0 && _cxa_guard_acquire(&dword_60CBE26C) )
  {
    dword_60CBE268 = (int)&off_60BDBC48;
    _cxa_guard_release(&dword_60CBE26C);
  }
  if ( !(**(int (__fastcall ***)(int, int *))v15)(v15, &dword_60CBE268) )
    v15 = 0;
  FIELD_U16(v15, 8038) = 3 * ((v9 + 1) % 3);
  return sub_605D79D0(v15, (StateBase *)&dword_60CBE230, 0);
}
