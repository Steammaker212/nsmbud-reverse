/* sub_608B8E7C
 * address: 0x608B8E7C   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B8E7C(int a1)
{
  int v2; // r4
  int v3; // r6
  int v4; // r5
  int i; // r10
  int result; // r0
  int v7; // r0
  int v8; // r7
  char v9; // r4
  int v10; // r5
  char v11; // r0
  int v12; // r0
  int v13; // r5

  v2 = 0;
  v3 = a1 + 244;
  do
  {
    v4 = *(_DWORD *)(v3 + 4 * v2);
    if ( v4 )
    {
      sub_608BB150(*(_DWORD *)(v3 + 4 * v2), 127);
      sub_608BB1CC(v4);
    }
    ++v2;
  }
  while ( v2 != 16 );
  for ( i = 0; ; ++i )
  {
    result = FIELD_U32(a1, 204);
    if ( !result
      && (float)(FIELD_F32(a1, 208)
               * (float)((float)(FIELD_F32(a1, 196)
                               * (float)(FIELD_U16(a1, 218) * FIELD_U8(a1, 217)))
                       / 60000.0)) < 1.0 )
    {
      FIELD_U32(a1, 208) = 0;
      return 0;
    }
    if ( i >= dword_60C5B04C )
      return result;
    if ( result )
      FIELD_U32(a1, 204) = result - 1;
    else
      FIELD_F32(a1, 208) = FIELD_F32(a1, 208)
                           + (float)(-1.0
                                   / (float)((float)(FIELD_F32(a1, 196)
                                                   * (float)(FIELD_U16(a1, 218)
                                                           * FIELD_U8(a1, 217)))
                                           / 60000.0));
    v7 = FIELD_S16(a1, 224);
    v8 = 0;
    v9 = 0;
    if ( v7 < FIELD_S16(a1, 222) )
      FIELD_U16(a1, 224) = v7 + 1;
    do
    {
      v10 = *(_DWORD *)(v3 + 4 * v8);
      if ( v10 )
      {
        sub_608BB200(*(_DWORD *)(v3 + 4 * v8));
        if ( sub_608BB288(v10, 0) < 0 && *(_DWORD *)(v3 + 4 * v8) )
        {
          sub_608BB040();
          (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 232) + 12))(
            FIELD_U32(a1, 232),
            *(_DWORD *)(v3 + 4 * v8));
          *(_DWORD *)(v3 + 4 * v8) = 0;
        }
        v11 = FIELD_U8(v10, 5);
        v9 |= v11 != 0;
      }
      ++v8;
    }
    while ( v8 != 16 );
    if ( (v9 & 1) == 0 )
      break;
    ++FIELD_U32(a1, 340);
  }
  if ( FIELD_U8(a1, 458) )
  {
    v12 = sub_608C3C60(FIELD_U8(a1, 458));
    sub_608C411C(v12, a1 + 176);
    FIELD_U8(a1, 458) = 0;
  }
  v13 = 0;
  if ( FIELD_U8(a1, 37) )
    FIELD_U8(a1, 37) = 0;
  do
  {
    if ( *(_DWORD *)(v3 + 4 * v13) )
    {
      sub_608BB040();
      (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 232) + 12))(
        FIELD_U32(a1, 232),
        *(_DWORD *)(v3 + 4 * v13));
      *(_DWORD *)(v3 + 4 * v13) = 0;
    }
    ++v13;
  }
  while ( v13 != 16 );
  FIELD_U8(a1, 39) = 1;
  return 1;
}
