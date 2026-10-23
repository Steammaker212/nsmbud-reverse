/* sub_601E0AB8
 * address: 0x601E0AB8   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E0AB8(_DWORD *a1)
{
  int v2; // r6
  int v3; // r0
  unsigned int v4; // r9
  int v5; // r0
  _DWORD *v6; // r7
  const char *v7; // r8
  int v8; // r1
  int i; // r2
  int v11; // [sp+10h] [bp-30h]
  int (**v12)(); // [sp+14h] [bp-2Ch] BYREF
  const char *v13; // [sp+18h] [bp-28h]

  v2 = 0;
  *a1 = 8;
  a1[1] = 0;
  v3 = sub_601A443C(dword_60C89E18, 8, 0);
  if ( FIELD_S32(v3, 32) >= 1 )
  {
    v4 = 0;
    v11 = v3;
    while ( 1 )
    {
      v5 = sub_60182E38(v3, v4);
      v12 = &sead__SafeStringBase__vtable;
      v6 = (_DWORD *)v5;
      v13 = "F000";
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      v7 = (const char *)v6[1];
      ((void (__fastcall *)(int (***)()))v12[3])(&v12);
      if ( v7 == v13 )
        break;
      v8 = v6[1];
      for ( i = 1; *(unsigned __int8 *)(v8 + i - 1) == (unsigned __int8)v13[i - 1]; i += 2 )
      {
        if ( !*(_BYTE *)(v8 + i - 1) )
          goto LABEL_14;
        if ( i > 0x80000 || *(unsigned __int8 *)(v8 + i) != (unsigned __int8)v13[i] )
          break;
        if ( !*(_BYTE *)(v8 + i) )
          goto LABEL_14;
      }
      v3 = v11;
      if ( (signed int)++v4 >= FIELD_U32(v11, 32) )
        return 0;
    }
LABEL_14:
    v2 = 1;
    a1[2] = v4;
  }
  return v2;
}
