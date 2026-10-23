/* sub_603701F4
 * address: 0x603701F4   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603701F4(int a1, float a2)
{
  int v3; // r1
  int result; // r0
  _BYTE *v5; // r1
  int v6; // r2

  CollisionMgr_process((_BYTE *)(a1 + 648), a2);
  v3 = FIELD_U32(a1, 2872);
  if ( (v3 & 1) != 0 || (v3 & 0x440000) != 0 && (v3 & 0x10000000) == 0 )
  {
    result = 1;
  }
  else
  {
    result = 0;
    if ( (v3 & 0x880000) != 0 )
      result = (v3 & 0x20000000) == 0;
  }
  v5 = (_BYTE *)(a1 + 6976);
  v6 = FIELD_U8(a1, 6976);
  if ( v6 == 2 )
  {
    if ( result )
      return SE_OBJ_POLTERGEIST_CRASH_ref(a1, 1);
  }
  else if ( v6 == 1 )
  {
    if ( !result )
    {
      *v5 = 2;
      FIELD_U32(a1, 3176) &= ~0x40000000u;
      FIELD_U32(a1, 3184) &= ~0x40000000u;
      result = FIELD_U32(a1, 3200) & 0xBFFFFFFF;
      FIELD_U32(a1, 3200) = result;
    }
  }
  else if ( !FIELD_U8(a1, 6976) )
  {
    if ( result )
    {
      *v5 = 1;
      FIELD_U32(a1, 3176) |= 0x40000000u;
      FIELD_U32(a1, 3184) |= 0x40000000u;
      result = FIELD_U32(a1, 3200) | 0x40000000;
      FIELD_U32(a1, 3200) = result;
    }
    else
    {
      *v5 = 2;
      return 2;
    }
  }
  return result;
}
