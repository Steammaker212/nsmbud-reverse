/* sub_6088B34C
 * address: 0x6088B34C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6088B34C(int a1)
{
  _DWORD *result; // r0
  int v3; // r8
  int v4; // r7
  _DWORD *v5; // r5
  int v6; // r4
  int v7; // r0
  unsigned int v8; // s0

  result = *(_DWORD **)a1;
  if ( !*(_BYTE *)(result[34] + 1874) )
  {
    v3 = result[183];
    if ( v3 )
    {
      FIELD_U8(v3, 16) = 0;
      v4 = FIELD_U32(v3, 20);
      if ( v4 )
      {
        v5 = *(_DWORD **)a1;
        v6 = SuperStripe_instance;
        do
        {
          v7 = FIELD_U32(v4, 80);
          v8 = (unsigned int)*(float *)(*(_DWORD *)(v5[87] + 580) + 24);
          --v5[368];
          v5[367] -= (96 * v8 + 255) & 0xFFFFFF00;
          sub_60882124(v7, 1);
          FIELD_U32(v4, 80) = 0;
          FIELD_U8(v4, 128) = 0;
          --FIELD_U32(v6, 28);
          v4 = FIELD_U32(v4, 92);
        }
        while ( v4 );
        FIELD_U32(v3, 20) = 0;
      }
      (*(void (__fastcall **)(int, int))(*(_DWORD *)(*(_DWORD *)a1 + 1464) + 12))(*(_DWORD *)a1 + 1464, v3);
      result = *(_DWORD **)a1;
      *(_DWORD *)(*(_DWORD *)a1 + 732) = 0;
    }
  }
  return result;
}
