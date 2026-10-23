/* ShellEnemy__afterCreate
 * address: 0x6039F2A8   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CollisionActor : 0x60003140
// 
// Overridden by: None
void __fastcall ShellEnemy__afterCreate(int a1, unsigned int a2)
{
  if ( a2 == 2 )
  {
    if ( !FIELD_U8(a1, 6584) )
    {
      sub_603A4974(a1, 1);
      FIELD_U8(a1, 6584) = 1;
    }
    if ( !FIELD_U8(a1, 6392) && FIELD_U32(dword_60C99DD4, 764) == 4 )
      sub_60003D84((_DWORD *)a1);
  }
  CollisionActor__afterCreate((CollisionActor *)a1, a2);
}
