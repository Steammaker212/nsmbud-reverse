/* sub_608B5A70
 * address: 0x608B5A70   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608B5A70(int a1, int a2)
{
  int v3; // r0
  _DWORD v5[5]; // [sp+0h] [bp-40h] BYREF
  int v6; // [sp+14h] [bp-2Ch]
  int v7; // [sp+18h] [bp-28h]
  int v8; // [sp+1Ch] [bp-24h]
  char v9; // [sp+20h] [bp-20h]
  int v10; // [sp+2Ch] [bp-14h]
  int v11; // [sp+30h] [bp-10h]

  nn__audio__InitializeAudioRendererParameter(v5);
  v5[0] = *(_DWORD *)a2;
  v5[1] = 5 * v5[0] / 0x3E8u;
  v5[2] = FIELD_U32(a2, 20);
  v5[3] = FIELD_U32(a2, 16);
  v5[4] = FIELD_U32(a2, 8);
  v6 = 1;
  v7 = FIELD_U32(a2, 4) + 4;
  v8 = 0;
  v9 = FIELD_U8(a2, 33);
  if ( FIELD_U8(a2, 24) )
    v8 = 3;
  if ( !FIELD_U8(a2, 27) )
    v7 = 0;
  v3 = 2;
  if ( FIELD_U8(a2, 28) )
  {
    v6 = 2;
    v3 = 3;
  }
  if ( FIELD_U8(a2, 29) )
    v6 = v3;
  if ( FIELD_U8(a2, 38) )
  {
    v10 = 1;
    v11 = 1;
  }
  return (nn__audio__GetRequiredBufferSizeForPerformanceFrames(v5) + 63) & 0xFFFFFFC0;
}
