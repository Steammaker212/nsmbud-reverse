/* Pokey__onDraw
 * address: 0x603813F8   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F54
// 
// Overridden by: None
int __fastcall Pokey__onDraw(int a1)
{
  int v2; // r5
  int v3; // r6
  int v4; // r0
  bool v5; // zf

  v2 = FIELD_U32(a1, 6300);
  if ( v2 )
  {
    v3 = FIELD_U32(a1, 6304);
    do
    {
      if ( *(_BYTE *)(*(_DWORD *)v3 + 128) )
        sub_60386340(*(_DWORD *)(*(_DWORD *)v3 + 4), *(_DWORD *)(*(_DWORD *)v3 + 8));
      --v2;
      v3 += 4;
    }
    while ( v2 );
  }
  v4 = FIELD_U32(a1, 6364);
  v5 = v4 == 0;
  if ( v4 )
    v5 = FIELD_U8(a1, 6368) == 0;
  if ( !v5 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
  return 1;
}
