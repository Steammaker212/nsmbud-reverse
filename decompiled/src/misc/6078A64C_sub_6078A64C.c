/* sub_6078A64C
 * address: 0x6078A64C   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078A64C(int a1, unsigned int a2)
{
  int v3; // r5
  int v4; // r2
  unsigned int v5; // r0

  v3 = 0;
  if ( !sub_6040E3D0(LevelInfo_instance)
    && !sub_6040E438(LevelInfo_instance)
    && (unsigned int)FIELD_U8(LevelInfo_instance, 17) - 38 >= 3 )
  {
    v4 = dword_60C99DD4 + 272;
    if ( !dword_60C99DD4 )
      v4 = dword_60C99DEC + 16;
    if ( a2 >= 6 )
      a2 = 0;
    v5 = v4 + 72 * a2;
    v3 = FIELD_U8(v5, 50);
    if ( FIELD_U8(v5, 50) )
      return 1;
  }
  return v3;
}
