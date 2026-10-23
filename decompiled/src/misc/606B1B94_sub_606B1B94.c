/* sub_606B1B94
 * address: 0x606B1B94   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606B1B94(int a1)
{
  unsigned int v2; // r1
  int (__fastcall ***v3)(_DWORD, int *); // r5
  char v4; // r12
  float v5; // s0
  float v6; // s2
  float v7; // s0

  v2 = FIELD_U32(a1, 56);
  if ( v2 )
  {
    v3 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
    if ( v3 )
    {
      if ( ((unsigned int)&dword_60CB7458 & ~(1617632220 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CB7458) )
      {
        dword_60CB7454 = (int)&off_60BC00E0;
        _cxa_guard_release(&dword_60CB7458);
      }
      if ( (**v3)(v3, &dword_60CB7454) == 1 )
      {
        v5 = sub_606AE1F0((int)v3, 0);
        v6 = FIELD_F32(a1, 16) + FIELD_F32(a1, 60);
        v7 = v5 * FIELD_F32(a1, 88);
        FIELD_F32(a1, 4) = v6;
        if ( FIELD_U32(a1, 64) )
        {
          *(_DWORD *)a1 = FIELD_U32(a1, 12);
          FIELD_F32(a1, 4) = v7 + v6;
        }
        else
        {
          *(float *)a1 = AreaTask_getWrappedXPos(AreaTask_intance, v7 + FIELD_F32(a1, 12));
        }
      }
    }
    else
    {
      FIELD_U32(a1, 68) = 1;
    }
  }
}
