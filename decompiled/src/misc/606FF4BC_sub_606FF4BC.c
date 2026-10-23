/* sub_606FF4BC
 * address: 0x606FF4BC   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606FF4BC(int a1)
{
  unsigned int v1; // r5
  unsigned int v2; // r4
  int (__fastcall ***v3)(_DWORD, int *); // r7
  char v4; // r12

  v1 = a1 + 7480;
  v2 = a1 + 7300;
  do
  {
    if ( *(_DWORD *)v2 )
    {
      v3 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, *(_DWORD *)v2);
      if ( ((unsigned int)&dword_60C7B364 & ~(1617950032 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v3 )
      {
        if ( (**v3)(v3, &StageActor_RTTI) == 1 )
          sub_607002CC(1, v3, FIELD_F32(v2, 16));
      }
      *(_DWORD *)v2 = 0;
      FIELD_U32(v2, 16) = 0;
      FIELD_U32(v2, 20) = 0x40000000;
    }
    v2 += 36;
  }
  while ( v2 <= v1 );
}
