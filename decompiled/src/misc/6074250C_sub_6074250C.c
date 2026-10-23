/* sub_6074250C
 * address: 0x6074250C   size: 676   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074250C(int a1, ActorBuildInfo *a2)
{
  _DWORD *v3; // r0
  int v4; // r10
  _DWORD *v5; // r7
  _DWORD *v6; // r11
  _DWORD *v7; // r5
  _BYTE *v8; // r0
  _DWORD *v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r0

  StateActor_ctor((StateActor *)a1, a2);
  *(_DWORD *)a1 = off_60C23174;
  memset((void *)(a1 + 6132), 0, 48);
  FIELD_U16(a1, 6112) = 0;
  FIELD_U32(a1, 6108) = 0;
  FIELD_U32(a1, 6100) = 0;
  FIELD_U32(a1, 6104) = 0;
  memset((void *)(a1 + 6184), 0, 100);
  sub_607427D0(a1 + 6284);
  FIELD_U32(a1, 6688) = off_60C2323C;
  v3 = (_DWORD *)sub_60479414(a1 + 6688, a1 + 10256, 20);
  *v3 = off_60C2323C;
  v4 = 0;
  v5 = v3 + 1081;
  do
  {
    v6 = &v5[v4];
    agl_TextureData_ref(&v5[v4 - 189]);
    *(v6 - 121) = 0;
    *(v6 - 120) = 0;
    *(v6 - 119) = 0;
    sub_60959B54(&v5[v4 - 117]);
    v5[v4] = &v5[v4 + 2];
    *(_DWORD *)(a1 + v4 * 4 + 11008) = &BufferedSafeStringBase_char_vtable_probably;
    v7 = (_DWORD *)(a1 + v4 * 4 + 11008);
    v6[1] = 64;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)v7);
    v8 = (_BYTE *)v5[v4];
    v4 += 208;
    *v8 = 0;
    *v7 = &off_60BD4BF0;
  }
  while ( v4 != 4160 );
  FIELD_U32(a1, 6120) = 24;
  FIELD_U32(a1, 6124) = 24;
  FIELD_U32(a1, 6128) = 24;
  memset((void *)(a1 + 6132), 0, 48);
  FIELD_U8(a1, 6181) = 3;
  FIELD_U8(a1, 6180) = 3;
  FIELD_U8(a1, 6182) = 3;
  FIELD_U8(a1, 6114) = -1;
  FIELD_U8(a1, 6115) = -1;
  FIELD_U8(a1, 6116) = -1;
  v9 = (_DWORD *)sub_608DE334(0x18u, 0, 4);
  if ( v9 )
  {
    FIELD_U32(a1, 6236) = v9;
    *v9 = v9 + 1;
    v9[1] = v9 + 2;
    v9[2] = 0;
    FIELD_U32(a1, 6240) = v9;
    sub_608DEB0C((_DWORD *)(a1 + 6224), 3, (int)(v9 + 3));
  }
  v10 = (_DWORD *)sub_608DE334(0x18u, 0, 4);
  if ( v10 )
  {
    FIELD_U32(a1, 6256) = v10;
    *v10 = v10 + 1;
    v10[1] = v10 + 2;
    v10[2] = 0;
    FIELD_U32(a1, 6260) = v10;
    sub_608DEB0C((_DWORD *)(a1 + 6244), 3, (int)(v10 + 3));
  }
  v11 = (_DWORD *)sub_608DE334(0x18u, 0, 4);
  if ( v11 )
  {
    FIELD_U32(a1, 6276) = v11;
    *v11 = v11 + 1;
    v11[1] = v11 + 2;
    v11[2] = 0;
    FIELD_U32(a1, 6280) = v11;
    sub_608DEB0C((_DWORD *)(a1 + 6264), 3, (int)(v11 + 3));
  }
  return a1;
}
