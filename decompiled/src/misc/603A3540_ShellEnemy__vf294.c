/* ShellEnemy__vf294
 * address: 0x603A3540   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CarryableEnemy : 0x60272D5C
// 
// Overridden by: None
signed int __fastcall ShellEnemy__vf294(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r0

  CarryableEnemy__vf294(a1);
  v2 = FIELD_U32(a1, 6376);
  if ( v2 > FIELD_U32(a1, 6380) )
    FIELD_U16(a1, 6384) = v2;
  v3 = FIELD_U32(a1, 6352);
  if ( v3 )
  {
    FIELD_U32(a1, 6356) = v3;
    FIELD_U32(a1, 6352) = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 696))(a1);
  }
  FIELD_U32(a1, 6372) = 0;
  FIELD_U32(a1, 6368) = 0;
  FIELD_U32(a1, 6364) = 0;
  FIELD_U32(a1, 6360) = 0;
  v4 = FIELD_U8(a1, 6386);
  if ( FIELD_U8(a1, 6386) )
    v4 = 0x80000000;
  FIELD_U32(a1, 156) = v4;
  FIELD_U8(a1, 6393) = 0;
  FIELD_U32(a1, 6400) = 0;
  FIELD_U32(a1, 6396) = 0;
  FIELD_U32(a1, 6404) = 0;
  return 6404;
}
