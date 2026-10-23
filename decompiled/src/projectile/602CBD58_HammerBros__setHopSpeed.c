/* HammerBros__setHopSpeed
 * address: 0x602CBD58   size: 196   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BrosBase : 0x6026759C
// 
// Overridden by: None
int __fastcall HammerBros__setHopSpeed(int a1)
{
  float v2; // s0
  unsigned int v3; // r0
  _DWORD *v4; // r0
  int result; // r0

  v2 = FIELD_F32(a1, 112) - FIELD_F32(a1, 12472);
  if ( v2 >= 56.0 )
  {
    v4 = (_DWORD *)(a1 + 12488);
    if ( v2 >= 120.0 )
    {
      *v4 = 2;
      v3 = 0;
    }
    else
    {
      *v4 = 1;
      v3 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 31;
    }
  }
  else
  {
    FIELD_U32(a1, 12488) = 0;
    v3 = 1;
  }
  FIELD_U32(a1, 12484) = v3;
  FIELD_U32(a1, 124) = dword_60AF2000[v3];
  result = dword_60AF2008[v3];
  FIELD_U32(a1, 12468) = result;
  return result;
}
