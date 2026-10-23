/* FlagSwitchRandom__onCreate
 * address: 0x606060E0   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F00
// 
// Overridden by: None
int __fastcall FlagSwitchRandom__onCreate(int a1)
{
  unsigned __int8 v1; // r1
  unsigned int v2; // r3
  int v3; // r3
  int v4; // r2
  unsigned int v5; // r1

  FIELD_U32(a1, 6116) = 0;
  FIELD_U32(a1, 6112) = 0;
  v1 = FIELD_U8(a1, 539) - 1;
  FIELD_U8(a1, 6122) = v1;
  FIELD_U8(a1, 6127) = -1;
  FIELD_U8(a1, 6130) = -1;
  FIELD_U8(a1, 6129) = -1;
  FIELD_U8(a1, 6128) = -1;
  if ( FIELD_U8(a1, 540) )
    FIELD_U8(a1, 6127) = FIELD_U8(a1, 540) - 1;
  v2 = FIELD_U32(a1, 20);
  if ( HIBYTE(v2) )
    FIELD_U8(a1, 6128) = HIBYTE(v2) - 1;
  if ( BYTE2(v2) )
    FIELD_U8(a1, 6129) = BYTE2(v2) - 1;
  if ( BYTE1(v2) )
    FIELD_U8(a1, 6130) = BYTE1(v2) - 1;
  v3 = 1 << v1;
  v4 = v1 - 32;
  if ( v4 >= 0 )
    v3 = 0;
  FIELD_U32(a1, 6104) = v3;
  v5 = 1u >> (32 - v1);
  if ( v4 >= 0 )
    v5 = 1 << v4;
  FIELD_U32(a1, 6108) = v5;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB2A90);
  return 1;
}
