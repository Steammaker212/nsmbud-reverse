/* sub_606B1CC8
 * address: 0x606B1CC8   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B1CC8(int result)
{
  int v1; // r4
  unsigned int v2; // r1
  int (__fastcall ***v3)(_DWORD, int *); // r5
  char v4; // r12
  int v5; // r0
  unsigned int v6; // r1
  float *v7; // r2
  float v8; // s2

  v1 = result;
  v2 = FIELD_U32(result, 56);
  if ( v2 )
  {
    v3 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
    if ( v3 )
    {
      if ( ((unsigned int)&dword_60CB724C & ~(1617632528 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CB724C) )
      {
        dword_60CB7248 = (int)&off_60BC00E0;
        _cxa_guard_release(&dword_60CB724C);
      }
      v5 = (**v3)(v3, &dword_60CB7248);
      v6 = FIELD_U32(v1, 152);
      if ( v6 >= 3 )
        v6 = 0;
      v7 = (float *)(8 * v6);
      if ( v5 )
        v7 = (float *)&v3[2 * v6];
      v8 = v7[2029] - v7[2035];
      *(float *)v1 = (float)(v7[2028] - v7[2034]) + FIELD_F32(v1, 12);
      FIELD_F32(v1, 4) = v8 + FIELD_F32(v1, 16);
      return (int)(v7 + 2029);
    }
    else
    {
      FIELD_U32(v1, 68) = 1;
      return 1;
    }
  }
  return result;
}
