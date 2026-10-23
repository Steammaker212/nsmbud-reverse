/* sub_608B5378
 * address: 0x608B5378   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B5378(int a1, int a2)
{
  int v4; // r0
  int v5; // r1
  _DWORD v7[5]; // [sp+0h] [bp-48h] BYREF
  int v8; // [sp+14h] [bp-34h]
  int v9; // [sp+18h] [bp-30h]
  int v10; // [sp+1Ch] [bp-2Ch]
  char v11; // [sp+20h] [bp-28h]
  int v12; // [sp+2Ch] [bp-1Ch]
  int v13; // [sp+30h] [bp-18h]

  nn__audio__InitializeAudioRendererParameter(v7);
  v7[0] = *(_DWORD *)a2;
  v7[1] = 5 * v7[0] / 0x3E8u;
  v7[2] = FIELD_U32(a2, 20);
  v7[3] = FIELD_U32(a2, 16);
  v7[4] = FIELD_U32(a2, 8);
  v8 = 1;
  v9 = FIELD_U32(a2, 4) + 4;
  v10 = 0;
  v11 = FIELD_U8(a2, 33);
  if ( FIELD_U8(a2, 24) )
    v10 = 3;
  if ( !FIELD_U8(a2, 27) )
    v9 = 0;
  v4 = 2;
  if ( FIELD_U8(a2, 28) )
  {
    v8 = 2;
    v4 = 3;
  }
  v5 = 6;
  if ( FIELD_U8(a2, 29) )
    v8 = v4;
  if ( FIELD_U8(a2, 38) )
  {
    v12 = 1;
    v13 = 1;
  }
  if ( FIELD_U8(a1, 1404) )
    v5 = 2;
  return nn__audio__GetRequiredBufferSizeForCircularBufferSink(v7, v5, FIELD_U32(a2, 12), 2);
}
