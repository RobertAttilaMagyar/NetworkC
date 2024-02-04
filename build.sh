#!/bin/bash

BUILD_DIR="build"
mkdir -p $BUILD_DIR

cd $BUILD_DIR

cmake ..

if make; then
echo " ______     ______     ______     __        "
echo "/\  ___\   /\  __ \   /\  __ \   /\ \       "
echo "\ \ \____  \ \ \/\ \  \ \ \/\ \  \ \ \____  "
echo " \ \_____\  \ \_____\  \ \_____\  \ \_____\ "
echo "  \/_____/   \/_____/   \/_____/   \/_____/ "
echo "                                            "
echo "                                            "
fi