/* sub_602241C0
 * address: 0x602241C0   size: 1324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602241C0(int a1)
{
  int v2; // r9
  int v3; // r6
  int result; // r0
  int v5; // r10
  int v6; // r11
  int i; // r7
  int v8; // r4
  const char *v9; // r5
  int v10; // r1
  int v11; // r0
  int v12; // r4
  int v13; // r0
  int j; // r7
  _DWORD *v15; // r0
  int v16; // r1
  int v17; // r0
  int v18; // r1
  int v19; // r0
  int v20; // r1
  int v21; // r5
  const char *v22; // r4
  int v23; // r1
  int v24; // r0
  int Resource; // [sp+10h] [bp-40h]
  _DWORD *v26; // [sp+14h] [bp-3Ch]
  int (**v27)(); // [sp+1Ch] [bp-34h] BYREF
  const char *v28; // [sp+20h] [bp-30h]
  int (**v29)(); // [sp+24h] [bp-2Ch] BYREF
  int v30; // [sp+28h] [bp-28h]

  v2 = 0;
  v27 = &sead__SafeStringBase__vtable;
  v28 = "anim";
  while ( aAnim[v2] )
  {
    if ( v2 >= 0x80000 )
    {
      v2 = 0;
      break;
    }
    if ( !aAnim[v2 + 1] )
    {
      ++v2;
      break;
    }
    v2 += 2;
  }
  Resource = LoadResource(ResourceMgrRelated_instance, (_DWORD *)(a1 + 1792));
  v26 = (_DWORD *)a1;
  v3 = **(_DWORD **)(a1 + 8);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 92))(v3);
  if ( result >= 1 )
  {
    v5 = v2;
    if ( v2 >= 0x80000 )
      v5 = 0x80000;
    if ( v2 <= 0 )
    {
      v12 = 0;
      do
      {
        v13 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 88))(v3, v12);
        v29 = &sead__SafeStringBase__vtable;
        v30 = v13;
        ((void (__fastcall *)(int (***)()))v27[3])(&v27);
        ((void (__fastcall *)(int (***)()))v27[3])(&v27);
        ((void (__fastcall *)(int (***)()))v29[3])(&v29);
        ++v12;
      }
      while ( v12 < (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 92))(v3) );
    }
    else
    {
      v6 = 0;
      for ( i = 0; i < result; ++i )
      {
        v8 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 88))(v3, i);
        v29 = &sead__SafeStringBase__vtable;
        v30 = v8;
        ((void (__fastcall *)(int (***)()))v27[3])(&v27);
        ((void (__fastcall *)(int (***)()))v27[3])(&v27);
        v9 = v28;
        ((void (__fastcall *)(int (***)()))v29[3])(&v29);
        if ( v9 == (const char *)v30 )
        {
LABEL_18:
          ++v6;
        }
        else
        {
          v10 = 0;
          while ( (unsigned __int8)v28[v10] == *(unsigned __int8 *)(v30 + v10) )
          {
            if ( v28[v10] )
            {
              if ( ++v10 < v5 )
                continue;
            }
            goto LABEL_18;
          }
          if ( sub_6022A8B4(v8) || sub_6022A900(v8) == 1 )
          {
            v29 = &sead__SafeStringBase__vtable;
            v30 = v8;
            v11 = sub_6043AE64(Resource, &v29);
            v29 = &sead__SafeStringBase__vtable;
            v30 = v8;
            v6 += (v11 >= 0) + (sub_6043AED0(Resource, &v29) >= 0);
          }
        }
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 92))(v3);
      }
      if ( !v6 )
        return result;
    }
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 92))(v3);
    if ( result >= 1 )
    {
      for ( j = 0; j < result; ++j )
      {
        v21 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 88))(v3, j);
        v29 = &sead__SafeStringBase__vtable;
        v30 = v21;
        ((void (__fastcall *)(int (***)()))v27[3])(&v27);
        ((void (__fastcall *)(int (***)()))v27[3])(&v27);
        v22 = v28;
        ((void (__fastcall *)(int (***)()))v29[3])(&v29);
        if ( v2 < 1 || v22 == (const char *)v30 )
        {
LABEL_47:
          v24 = sub_6022A7E4(v26[1], j);
          sub_60224B54(v26, v26[2], v24, j);
        }
        else
        {
          v23 = 0;
          while ( (unsigned __int8)v28[v23] == *(unsigned __int8 *)(v30 + v23) )
          {
            if ( v28[v23] )
            {
              if ( ++v23 < v5 )
                continue;
            }
            goto LABEL_47;
          }
          if ( sub_6022A8B4(v21) || sub_6022A900(v21) == 1 )
          {
            v29 = &sead__SafeStringBase__vtable;
            v30 = v21;
            if ( sub_6043AE64(Resource, &v29) >= 0 )
            {
              v29 = &sead__SafeStringBase__vtable;
              v30 = v21;
              v15 = sub_6022EB7C();
              if ( v15 )
              {
                v16 = v26[7];
                if ( v16 < v26[8] )
                {
                  *(_DWORD *)(v26[9] + 4 * v16) = v15;
                  ++v26[7];
                }
                ++v26[444];
              }
            }
            v29 = &sead__SafeStringBase__vtable;
            v30 = v21;
            if ( sub_6043AED0(Resource, &v29) >= 0 )
            {
              v17 = v26[445];
              v18 = v26[2];
              v29 = &sead__SafeStringBase__vtable;
              v30 = v21;
              v19 = sub_6022EC58(v26, v18, &v29, v17 + 5);
              if ( v19 )
              {
                v20 = v26[7];
                if ( v20 < v26[8] )
                {
                  *(_DWORD *)(v26[9] + 4 * v20) = v19;
                  ++v26[7];
                }
                ++v26[445];
              }
            }
          }
        }
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 92))(v3);
      }
    }
  }
  return result;
}
