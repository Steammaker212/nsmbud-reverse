/* sub_6006F594
 * address: 0x6006F594   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6006F594(int a1)
{
  int v2; // r5
  float v3; // s2
  int v4; // r5
  float result; // s0
  float *v6; // r4
  _DWORD *v7; // t1
  float v8; // s2
  _BYTE v9[12]; // [sp+0h] [bp-78h] BYREF
  float v10; // [sp+Ch] [bp-6Ch]
  float v11; // [sp+1Ch] [bp-5Ch]
  _BYTE v12[72]; // [sp+30h] [bp-48h] BYREF

  v2 = a1 + 25596;
  if ( sub_60235E50(a1 + 25596) == 1 )
  {
    (*(void (__fastcall **)(_DWORD, _DWORD, _BYTE *))(***(_DWORD ***)(a1 + 7112) + 108))(
      **(_DWORD **)(a1 + 7112),
      FIELD_U32(a1, 7576),
      v12);
    sub_60236A80(v2, v12, 1);
    (*(void (__fastcall **)(_DWORD, _DWORD, _BYTE *))(***(_DWORD ***)(a1 + 7112) + 108))(
      **(_DWORD **)(a1 + 7112),
      FIELD_U32(a1, 7584),
      v9);
    v3 = v10;
    FIELD_F32(a1, 11388) = v11 - FIELD_F32(a1, 112);
    FIELD_F32(a1, 11384) = v3 - FIELD_F32(a1, 108);
  }
  v4 = a1 + 25660;
  if ( sub_60235E50(a1 + 25660) == 1 )
  {
    v7 = *(_DWORD **)(a1 + 7112);
    v6 = (float *)(a1 + 7112);
    (*(void (__fastcall **)(_DWORD, _DWORD *, _BYTE *))(*(_DWORD *)*v7 + 108))(*v7, *((_DWORD **)v6 + 117), v12);
    sub_60236A80(v4, v12, 1);
    (*(void (__fastcall **)(_DWORD, _DWORD *, _BYTE *))(***(_DWORD ***)v6 + 108))(
      **(_DWORD **)v6,
      *((_DWORD **)v6 + 119),
      v9);
    v8 = v10;
    v6[993] = v11 - *(v6 - 1750);
    result = v8 - *(v6 - 1751);
    v6[992] = result;
  }
  return result;
}
