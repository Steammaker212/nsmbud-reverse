/* s_4dx_4d_size_d_s_ref
 * address: 0x6093F0A4   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall s_4dx_4d_size_d_s_ref(int a1, int a2)
{
  int result; // r0
  int v5; // r10
  int v6; // r4
  int v7; // r10
  int v8; // t1
  int v9; // r5
  int v10; // r4
  int v11; // r6
  const char *v12; // r11
  unsigned int v13; // r7
  int v14; // r0
  int v15; // r1
  int (**v16)(); // [sp+10h] [bp-430h] BYREF
  int *v17; // [sp+14h] [bp-42Ch]
  int v18; // [sp+18h] [bp-428h]
  int v19; // [sp+1Ch] [bp-424h] BYREF

  v17 = &v19;
  v16 = &BufferedSafeStringBase_char_vtable_probably;
  v18 = 1024;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v16);
  *(_BYTE *)v17 = 0;
  v16 = &off_60BFA9DC;
  result = 608;
  v5 = a1 + 608 * a2;
  v8 = FIELD_U32(v5, 24);
  v7 = v5 + 24;
  v6 = v8;
  if ( v8 )
  {
    v9 = FIELD_U32(v7, 4);
    do
    {
      result = sub_60953BBC(v9);
      --v6;
      v9 += 92;
    }
    while ( v6 );
  }
  v10 = FIELD_U32(a1, 2456);
  if ( v10 )
  {
    v11 = FIELD_U32(a1, 2460) + 272;
    do
    {
      result = *(_DWORD *)v11;
      if ( *(_DWORD *)v11 )
      {
        result = FIELD_U32(v11, 32);
        if ( result == v7 )
        {
          (*(void (__fastcall **)(int))(FIELD_U32(v11, 36) + 12))(v11 + 36);
          v12 = *(const char **)(v11 + 40);
          v13 = *(unsigned __int16 *)(v11 - 248);
          v14 = sub_609200A0(v11 - 272);
          v15 = *(unsigned __int16 *)(v11 - 246);
          if ( v14 > v15 )
            v15 = v14;
          if ( v13 <= 1 )
            v13 = 1;
          result = sub_608FDDF4(
                     (int)&v16,
                     "[%s] (%4dx%4d) size:%d [%s]",
                     v12,
                     v13,
                     v15,
                     *(_DWORD *)(v11 - 228) + *(_DWORD *)(v11 - 232),
                     off_60C5E340[FIELD_U8(v11, 62)]);
        }
      }
      v11 += 392;
      --v10;
    }
    while ( v10 );
  }
  return result;
}
