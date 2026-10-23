/* sub_60711B4C
 * address: 0x60711B4C   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60711B4C(int a1)
{
  int v2; // r10
  int v3; // r7
  int v4; // r8
  unsigned __int8 **v5; // r5
  int result; // r0
  int v7; // r5
  int v8; // r11
  int v9; // r9
  int v10; // r8
  __int64 v11; // r0
  int v12; // [sp+18h] [bp-80h]
  _BYTE v13[4]; // [sp+24h] [bp-74h] BYREF
  int (**v14)(); // [sp+28h] [bp-70h] BYREF
  int *v15; // [sp+2Ch] [bp-6Ch]
  int v16; // [sp+30h] [bp-68h]
  int v17; // [sp+34h] [bp-64h] BYREF

  FIELD_U32(a1, 20) = operator_new_8DE09C(0x2000u);
  v2 = 0;
  v3 = 0;
  v4 = FIELD_U8(LevelInfo_instance, 18);
  v12 = v4;
  do
  {
    v5 = (unsigned __int8 **)sub_6071B22C(TilesetMgr_instance, v4, v3);
    result = *v5[1];
    if ( *v5[1] )
    {
      v15 = &v17;
      v14 = &BufferedSafeStringBase_char_vtable_probably;
      v16 = 64;
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v14);
      *(_BYTE *)v15 = 0;
      v14 = &off_60BD4BF0;
      (*((void (__fastcall **)(unsigned __int8 **))*v5 + 3))(v5);
      sub_608FDDF4((int)&v14, "BG_chk/d_bgchk_%s.bin", v5[1]);
      v7 = sub_608226EC(ArchiveManagerMaybe_instance, v5, &v14, v13);
      v8 = 0;
      v9 = v2;
      do
      {
        v10 = FIELD_U32(a1, 20);
        v11 = off_60C5CB14(*(_DWORD *)(v7 + v8), *(_DWORD *)(v7 + v8 + 4));
        v8 += 8;
        *(_DWORD *)(v10 + v9) = v11;
        result = v10 + v9;
        v9 += 8;
        FIELD_U32(result, 4) = HIDWORD(v11);
      }
      while ( v8 != 2048 );
      v4 = v12;
    }
    ++v3;
    v2 += 2048;
  }
  while ( v3 != 4 );
  return result;
}
