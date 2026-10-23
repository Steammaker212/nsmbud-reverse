/* sub_6043146C
 * address: 0x6043146C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6043146C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r0
  int v5; // r6
  int v6; // r5
  int v7; // r0
  int v8; // r6

  *a1 = off_60BFA720;
  v2 = a1[1];
  v3 = FIELD_U16(v2, 108);
  if ( FIELD_U16(v2, 108) )
  {
    v4 = a1[3];
    do
    {
      v5 = v4 + 776;
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
      --v3;
      v4 = v5;
    }
    while ( v3 );
    v2 = a1[1];
  }
  v6 = FIELD_U16(v2, 106);
  if ( FIELD_U16(v2, 106) )
  {
    v7 = a1[4];
    do
    {
      v8 = v7 + 3016;
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
      --v6;
      v7 = v8;
    }
    while ( v6 );
  }
  return a1;
}
