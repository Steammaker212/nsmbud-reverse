/* nn__atk__detail__ExternalSoundPlayer__SetPlayableSoundCount
 * address: 0x608B0A04   size: 156   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall nn__atk__detail__ExternalSoundPlayer__SetPlayableSoundCount(int a1, int a2)
{
  int v3; // r5
  int v4; // r1
  int result; // r0
  int v6; // r2
  int v7; // r0
  int v8; // r2
  int v9; // r3
  int v10; // r4

  v3 = a1 + 4;
  FIELD_U32(a1, 12) = a2;
  while ( 1 )
  {
    v4 = FIELD_U32(a1, 8);
    result = 0;
    if ( v4 != v3 )
    {
      result = 0;
      v6 = FIELD_U32(a1, 8);
      do
      {
        v6 = FIELD_U32(v6, 4);
        ++result;
      }
      while ( v6 != v3 );
    }
    if ( result <= FIELD_U32(a1, 12) )
      break;
    v7 = 0;
    v8 = 128;
    do
    {
      v9 = *(unsigned __int8 *)(v4 - 224) + *(_DWORD *)(v4 - 348);
      v10 = 0;
      if ( v9 > 0 )
        v10 = *(unsigned __int8 *)(v4 - 224) + *(_DWORD *)(v4 - 348);
      if ( v9 > 127 )
        v10 = 127;
      if ( v8 > v10 )
        v7 = v4 - 420;
      v4 = FIELD_U32(v4, 4);
      if ( v8 > v10 )
        v8 = v10;
    }
    while ( v4 != v3 );
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 16))(v7);
  }
  return result;
}
