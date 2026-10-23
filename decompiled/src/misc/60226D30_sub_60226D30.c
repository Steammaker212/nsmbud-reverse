/* sub_60226D30
 * address: 0x60226D30   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60226D30(int a1, int a2)
{
  _BOOL4 result; // r0
  int *v5; // r0
  int v6; // r1
  bool v7; // cc
  char v8; // r2
  int Resource; // r7
  int v10; // r6
  int v11; // r0
  int v12; // r1
  int *v13; // r2
  int v14; // r1
  int v15; // r2
  char v16; // r1
  int (**v17)(); // [sp+4h] [bp-44h] BYREF
  int *v18; // [sp+8h] [bp-40h]
  int v19; // [sp+Ch] [bp-3Ch]
  int v20; // [sp+10h] [bp-38h] BYREF

  v18 = &v20;
  v17 = &BufferedSafeStringBase_char_vtable_probably;
  v19 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v17);
  *(_BYTE *)v18 = 0;
  v17 = &off_60BD4C20;
  sub_608FDDF4((int)&v17, "trap");
  result = 0;
  if ( a2 == 1 )
  {
    ((void (__fastcall *)(int (***)()))v17[3])(&v17);
    v5 = v18;
    v6 = 0;
    while ( *((_BYTE *)v18 + v6) )
    {
      if ( !*((_BYTE *)v18 + v6 + 1) )
      {
        ++v6;
        break;
      }
      if ( !*((_BYTE *)v18 + v6 + 2) )
      {
        v6 += 2;
        break;
      }
      v7 = v6 + 2 <= 0x7FFFF;
      v6 += 3;
      if ( !v7 )
      {
        v6 = 0;
        break;
      }
    }
    if ( v6 < v19 - 1 )
    {
      v8 = 65;
      goto LABEL_23;
    }
  }
  else
  {
    if ( a2 )
      return result;
    ((void (__fastcall *)(int (***)()))v17[3])(&v17);
    v5 = v18;
    v6 = 0;
    while ( *((_BYTE *)v18 + v6) )
    {
      if ( !*((_BYTE *)v18 + v6 + 1) )
      {
        ++v6;
        break;
      }
      if ( !*((_BYTE *)v18 + v6 + 2) )
      {
        v6 += 2;
        break;
      }
      v7 = v6 + 2 <= 0x7FFFF;
      v6 += 3;
      if ( !v7 )
      {
        v6 = 0;
        break;
      }
    }
    if ( v6 < v19 - 1 )
    {
      v8 = 66;
LABEL_23:
      *((_BYTE *)v5 + v6) = v8;
      *((_BYTE *)v5 + v6 + 1) = 0;
    }
  }
  Resource = LoadResource(ResourceMgrRelated_instance, (_DWORD *)(a1 + 1792));
  v10 = sub_602265DC(Resource, (const char **)&v17);
  v11 = sub_6043AE64(Resource, &v17);
  v12 = FIELD_U32(a1, 12);
  v13 = *(int **)(v12 + 12);
  v14 = **(_DWORD **)(v12 + 28);
  v15 = *v13;
  if ( (v11 | v10) >= 0 )
  {
    if ( (FIELD_U8(v15, 28) & 0x20) == 0 )
      return 0;
    goto LABEL_30;
  }
  if ( v10 < 0 )
  {
    if ( v11 < 0 )
      return 0;
LABEL_30:
    v16 = FIELD_U8(v14, 28);
    return (v16 & 0x20) != 0;
  }
  v16 = FIELD_U8(v15, 28);
  return (v16 & 0x20) != 0;
}
