/* sub_603CF5B8
 * address: 0x603CF5B8   size: 660   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603CF5B8(_DWORD *a1)
{
  int v3; // r5
  unsigned int v4; // r1
  int v5; // r6
  char v6; // r12
  unsigned int v7; // r1
  int v8; // r6
  char v9; // r12
  unsigned int v10; // r1
  int v11; // r6
  char v12; // r12
  unsigned int v13; // r1
  int v14; // r4
  char v15; // r12

  if ( sub_603CF8B0(a1, 0) == 1 )
  {
    sub_603CFCD8(a1);
    return 1;
  }
  else
  {
    v3 = ActorMgr__instance + 27168;
    v4 = a1[165];
    if ( v4 )
    {
      v5 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v4);
      if ( v5 )
      {
        if ( ((unsigned int)&dword_60C92F04 & ~(1614607908 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C92F04) )
        {
          dword_60C92F00 = (int)&off_60BC04AC;
          _cxa_guard_release(&dword_60C92F04);
        }
        if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C92F00) == 1 )
          FIELD_U8(v5, 6604) = 1;
      }
    }
    v7 = a1[167];
    if ( v7 )
    {
      v8 = ActorMgrRelated_getById(v3, v7);
      if ( v8 )
      {
        if ( ((unsigned int)&dword_60C92F04 & ~(1614608056 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C92F04) )
        {
          dword_60C92F00 = (int)&off_60BC04AC;
          _cxa_guard_release(&dword_60C92F04);
        }
        if ( (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C92F00) == 1 )
          FIELD_U8(v8, 6604) = 1;
      }
    }
    v10 = a1[169];
    if ( v10 )
    {
      v11 = ActorMgrRelated_getById(v3, v10);
      if ( v11 )
      {
        if ( ((unsigned int)&dword_60C92F04 & ~(1614608204 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C92F04) )
        {
          dword_60C92F00 = (int)&off_60BC04AC;
          _cxa_guard_release(&dword_60C92F04);
        }
        if ( (**(int (__fastcall ***)(int, int *))v11)(v11, &dword_60C92F00) == 1 )
          FIELD_U8(v11, 6604) = 1;
      }
    }
    v13 = a1[171];
    if ( v13 )
    {
      v14 = ActorMgrRelated_getById(v3, v13);
      if ( v14 )
      {
        if ( ((unsigned int)&dword_60C92F04 & ~(1614608352 << v15) & 1) == 0 && _cxa_guard_acquire(&dword_60C92F04) )
        {
          dword_60C92F00 = (int)&off_60BC04AC;
          _cxa_guard_release(&dword_60C92F04);
        }
        if ( (**(int (__fastcall ***)(int, int *))v14)(v14, &dword_60C92F00) == 1 )
          FIELD_U8(v14, 6604) = 1;
      }
    }
    return 1;
  }
}
