/* sub_6078A3DC
 * address: 0x6078A3DC   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6078A3DC(int a1, unsigned int a2)
{
  int v2; // r2
  unsigned int v3; // r3
  int v4; // r3
  unsigned int v5; // r2
  int v6; // r3
  bool v7; // zf
  int v8; // r0

  v2 = dword_60C99DD4 + 272;
  v3 = 0;
  if ( !dword_60C99DD4 )
    v2 = dword_60C99DEC + 16;
  if ( a2 < 6 )
    v3 = a2;
  v4 = v2 + 72 * v3;
  if ( !FIELD_U8(v4, 20) || FIELD_S32(v4, 24) < 1 )
    return 0;
  if ( (FIELD_U8(dword_60C9CF0C, 1404) & (1 << a2)) == 0 )
  {
    v5 = 0;
    if ( a2 < 4 )
      v5 = a2;
    v6 = *(_DWORD *)(a1 + 4 * v5 + 32);
    v7 = v6 == 0;
    if ( v6 )
      v7 = (FIELD_U8(v6, 1219) & 8) == 0;
    if ( !v7 )
      return 0;
  }
  if ( a2 >= 4 )
    a2 = 0;
  v8 = *(_DWORD *)(a1 + 4 * a2 + 32);
  return v8 && sub_6075EE0C(v8);
}
