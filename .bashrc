function activate()
{
  export PATH=$HOME/openwrt/staging_dir/toolchain-mips_34kc_gcc-5.3.0_musl-1.1.16/bin/:$HOME/openwrt/staging_dir/host/bin:$PATH
  export STAGING_DIR=$HOME/openwrt/staging_dir/toolchain-mips_34kc_gcc-5.3.0_musl-1.1.16/
    #export STAGING_DIR=$HOME/openwrt/staging_dir/toolchain-mips_34kc_gcc-5.3.0_musl-1.1.16/
  export LIB_TOOL_DIR=$HOME/openwrt/staging_dir/toolchain-mips_34kc_gcc-5.3.0_musl-1.1.16/lib
  export LIB_TARGET_DIR=$HOME/openwrt/staging_dir/target-mips_34kc_musl-1.1.16/usr/lib
  export CPLUS_TOOL_INCLUDE_PATH=$HOME/openwrt/staging_dir/toolchain-mips_34kc_gcc-5.3.0_musl-1.1.16/include
  export CPLUS_TOOL_USR_INCLUDE_PATH=$HOME/openwrt/staging_dir/toolchain-mips_34kc_gcc-5.3.0_musl-1.1.16/usr/include
  export CPLUS_TARGET_INCLUDE_PATH=$HOME/openwrt/staging_dir/target-mips_34kc_musl-1.1.16/include
  export CPLUS_TARGET_USR_INCLUDE_PATH=$HOME/openwrt/staging_dir/target-mips_34kc_musl-1.1.16/usr/include
  export CC=mips-openwrt-linux-gcc
  export CXX=mips-openwrt-linux-g++
}
              
